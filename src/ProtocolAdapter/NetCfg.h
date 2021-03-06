/*
 * NetCfg.h
 *
 *  Created on: Nov 17, 2012
 *      Author: Scorpion
 */

#ifndef NetCfg_H_
#define NetCfg_H_

#include "../CfgParser/CfgParser.h"

namespace centny {

class NetCfg: public CfgParser {
public:
	bool isTimeSync;
	bool isNoticeSync;
public:
	NetCfg(string& cfgPath);
	virtual ~NetCfg();
	string host();
	string port();
	string bhost();
	string bport();
	string path();
	bool ssl();
	string username();
	string busername();
	string password();
	string bpassword();
	string usrpwd();
	string cname();
	string bcname();
	bool isUpload();
	bool isDownload();
	time_t syncChkTime();
	time_t bindReconnectTime();
	string syncChkNotice();
	vector<string> syncChkType();
	string type();
	string locSyncDir();
	string dbPath();
	//the sync include filter.
	vector<string> sinc();
	//the sync exclude filter.
	vector<string> sexc();
	vector<string> rempty(vector<string>& tar);
};

} /* namespace centny */
#endif /* NetCfg_H_ */
