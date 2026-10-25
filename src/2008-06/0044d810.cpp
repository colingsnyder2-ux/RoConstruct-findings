// from server: 73% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-atl90-dll roc_app_init_native_sdk9de03a2731abfc4a.cpp

// Candidate translation unit (score above; library headers required).
// Native app initializer44d810, complete1467B including runtime_error catch.
#define _AFXDLL
#include "roc_doc_native_afx_h_e1e961746d00a41c.cpp"
#include <afxwin.h>
#include <afxpriv.h>
#include <afxole.h>
#include <afxdisp.h>
#include <atlbase.h>
#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/thread/recursive_mutex.hpp>
#include <queue>
#include <vector>
#include <string>
#include <stdexcept>
#include "util/standardout.h"
#include "security/SecurityContext.h"
#include "roc_native_background_priority_header_1eae1b6d71ad6ec5.cpp"

// Genuine OpenRBX VersionInfo declaration included by generated managed unit.
#include "roc_app_init_native_version_info_header8eadb78360e07bd2.cpp"

class ErrorUploader {
    struct data {
        std::queue<std::string> files; //00, native deque header32.
        boost::recursive_mutex sync; //20, ctor563070; size12.
        std::string url; //2c, native string ctor44d115.
    };
    boost::shared_ptr<data> state;
    RBX::worker_thread thread;
public:
    ErrorUploader(); //44d610; native allocation28, state allocation72.
    ~ErrorUploader(); //44a830.
};
class CRobloxCommandLineInfo : public CCommandLineInfo {
public:
    bool flag28,flag29,flag2a,flag2b,flag2c,flag2d,flag2e,flag2f;
    std::vector<std::string> files;
    CRobloxCommandLineInfo(); //44c1b0; native base40 +flags8 +vector24.
    virtual ~CRobloxCommandLineInfo(); //44c360.
};
class CBrowserDocManager : public CDocManager {
    CDocTemplate* browserTemplate; //20,4496c6; added to native base.
public:
    CBrowserDocManager(); //449650; allocation36.
};
class CIDEDocManager : public CDocManager {
    CDocTemplate* template20;
    CDocTemplate* template24;
    CDocTemplate* template28;
    CDocTemplate* template2c;
public:
    CIDEDocManager(bool); //449910; allocation48, boolret4.
};
// Pointer-only native subobject at app+a4; no layout or size claim.
class MainLogManagerNative {public:void startCrashReporter();}; //428180.
class NativeAtlModule {public:HRESULT RegisterServer(BOOL,const CLSID*);}; //44bea0.
class LogManager {public:static void ReportException(const std::exception&);}; //428850.
// 5c3ca0 calls class-registration routines and never reads/writes receiver.
class NativeClassRegistration {public:NativeClassRegistration();};

extern CString nativeCrashReportText; //96dcf0.
extern NativeAtlModule nativeAtlModule; //96dbb4.
extern HRESULT (__stdcall* nativeRegistrationCallback)(); //96dd00.
extern unsigned char nativeComModule; //97f340, pointer-only view.
extern int nativeStartupMode; //96d358, lazy cache.
extern void nativeSetOutputMode(int); //569910 cdecl, ret.
extern void nativeProfilerEnable(bool); //5c3f00 cdecl, one bool.
extern void nativeInitializeTypes(); //4448f0 cdecl.
extern void nativeInitializeCom(); //4495a0 cdecl.
extern void nativeRegisterNames1(); //41b8a0 cdecl.
extern void nativeRegisterNames2(); //41bb70 cdecl.
extern void nativeRegisterNames3(); //41bc40 cdecl.
extern void nativeSetVersion(const char*); //49ecf0 cdecl.
extern void nativeInitializeCallbacks(); //44cbb0 cdecl.
extern void* nativeStartupContext(); //412d50 cdecl, field130 startup mode.
extern HRESULT __stdcall nativeComRegister(void*,DWORD,DWORD); //449fb0 ret12.
extern HRESULT __stdcall nativeComUnregister(void*,BOOL,const CLSID*); //44b740 ret12.
extern void __stdcall nativeSetRegistrationMode(bool); //44d150 ret4.

class CRobloxAppNative : public CWinApp {
public:
    virtual BOOL InitInstance();
    BOOL initializeFramework(void*); //449bf0 ret4.
    void initializeSettings(); //44c760 ret.
    void initializeEmptyDocument(); //44a2c0 ret.
    BOOL openFiles(std::vector<std::string>::iterator,std::vector<std::string>::iterator); //44d1b0 ret16.
    template<class T>T& field(unsigned offset) {return *reinterpret_cast<T*>((char*)this+offset);}
};
typedef char NativeBaseAppSize[sizeof(CWinApp)==0xa4?1:-1];
typedef char NativeCommandLineSize[sizeof(CRobloxCommandLineInfo)==72?1:-1];
typedef char NativeUploaderSize[sizeof(ErrorUploader)==28?1:-1];
typedef char NativeBrowserManagerSize[sizeof(CBrowserDocManager)==36?1:-1];
typedef char NativeIdeManagerSize[sizeof(CIDEDocManager)==48?1:-1];

BOOL CRobloxAppNative::InitInstance() {
    try {
        nativeSetOutputMode(0);
        RBX::StandardOut::singleton()->print(RBX::MESSAGE_INFO,"ROBLOX InitInstance");
        RBX::Security::Impersonator impersonator(RBX::Security::LocalGUI);
        field<boost::scoped_ptr<ErrorUploader> >(0x10c).reset(new ErrorUploader);
        InitCommonControls();
        if(!CWinApp::InitInstance()) return FALSE;
        {
            CVersionInfo version;
            CString file;
            AfxGetModuleShortFileName(m_hInstance,file);
            version.Load(file);
            field<std::string>(0xf0)=version.GetFileVersionAsString();
        }
        {
            ATL::CRegKey key;
            if(key.Open(HKEY_CURRENT_USER,"Software\\ROBLOX Corporation\\Roblox",KEY_READ)==ERROR_SUCCESS) {
                DWORD enabled=1;
                key.QueryDWORDValue("CrashReport",enabled);
                nativeCrashReportText.ReleaseBuffer();
                if(enabled) field<MainLogManagerNative>(0xa4).startCrashReporter();
            } else field<MainLogManagerNative>(0xa4).startCrashReporter();
        }
        if(!AfxOleInit()) {
            AfxMessageBox(100,0,static_cast<UINT>(-1));
            return FALSE;
        }
        nativeInitializeCom();
        CRobloxCommandLineInfo command;
        ParseCommandLine(command);
        if(command.m_nShellCommand==CCommandLineInfo::AppUnregister) {
            nativeSetRegistrationMode(false);
            if(!nativeRegistrationCallback || SUCCEEDED(nativeRegistrationCallback()))
                nativeComUnregister(&nativeComModule,TRUE,0);
            return FALSE;
        }
        if(command.m_nShellCommand==CCommandLineInfo::AppRegister) {
            nativeSetRegistrationMode(true);
            nativeAtlModule.RegisterServer(TRUE,0);
            return FALSE;
        }
        nativeProfilerEnable(true);
        nativeInitializeTypes();
        static NativeClassRegistration classes;
        nativeRegisterNames1();
        nativeRegisterNames2();
        nativeSetVersion(field<std::string>(0xf0).c_str());
        AfxEnableControlContainer(0);
        initializeSettings();
        nativeInitializeCallbacks();
        void* startup=nativeStartupContext();
        if(!nativeStartupMode) nativeStartupMode=*reinterpret_cast<int*>((char*)startup+0x130);
        if(nativeStartupMode==5) command.flag2f=true;
        nativeRegisterNames3();
        if(command.m_bRunEmbedded || command.m_bRunAutomated) {
            m_pDocManager=new CIDEDocManager(command.flag2f);
            return SUCCEEDED(nativeComRegister(&nativeComModule,4,1));
        }
        if(command.flag2e) {
            m_pDocManager=new CBrowserDocManager;
            return ProcessShellCommand(command);
        }
        m_pDocManager=new CIDEDocManager(command.flag2f);
        if(!initializeFramework(0) || FAILED(nativeComRegister(&nativeComModule,4,1))) return FALSE;
        if(command.m_nShellCommand==CCommandLineInfo::FileNew) {
            if(command.files.size()) {
                ProcessShellCommand(command);
                openFiles(command.files.begin(),command.files.end());
                return FALSE;
            }
            if(!command.flag2f) initializeEmptyDocument();
            return TRUE;
        }
        if(command.m_nShellCommand==CCommandLineInfo::FileOpen)
            return ProcessShellCommand(command) && openFiles(command.files.begin(),command.files.end());
        return ProcessShellCommand(command);
    } catch(const std::runtime_error& error) {
        LogManager::ReportException(error);
        AfxMessageBox(error.what(),MB_ICONSTOP,0);
        return FALSE;
    }
}
