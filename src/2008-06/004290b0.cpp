// from server: 83% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHa /MD
// roc-lib: atl-9.0-dll roc_espeon_atlreporterror58efc0c60c192ebe.cpp

// Candidate translation unit (score above; library headers required).
#include <atlbase.h>
#include <atlcom.h>
typedef HRESULT (WINAPI *Report)(const CLSID&,LPCSTR,DWORD,LPCSTR,const IID&,HRESULT);
Report reportFunction=static_cast<Report>(&ATL::AtlReportError);
