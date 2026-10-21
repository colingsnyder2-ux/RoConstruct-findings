// from server: 98% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: xtp-11.2.2-lib-strlen roc_espeon_doccopyimportedname4f77cf61d1bd30ca.cpp

// Candidate translation unit (score above; library headers required).
#include <afxwin.h>
#include <atlbase.h>
#include <string>
#include <stdexcept>
struct ImportedString:std::string {__declspec(dllimport) const char* c_str() const;};
ImportedString make_name(int,const char*);
struct Interface {virtual void __stdcall s0()=0;virtual void __stdcall s1()=0;virtual void __stdcall s2()=0;virtual void __stdcall s3()=0;virtual void __stdcall s4()=0;virtual void __stdcall s5()=0;virtual void __stdcall s6()=0;virtual long __stdcall copy(BSTR)=0;};
struct Document {char prefix[148];Interface*object;};
CStringA copy_document(Document*doc,const char*suffix){CStringA result;GetShortPathNameA(make_name(1,"Test").c_str(),result.GetBuffer(260),260);result.ReleaseBuffer();result+=suffix;result+=".rbxl";if(doc->object->copy(ATL::CComBSTR(result))!=0)throw std::runtime_error("Failed to copy document");return result;}
