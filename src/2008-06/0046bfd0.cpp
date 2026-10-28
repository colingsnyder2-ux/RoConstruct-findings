// from server: 76% by EspClaude
// from server: 67% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espclaude_b7f41a474a9458ec.cpp

// Candidate translation unit (score above; library headers required).
#include <afxwin.h>
#include <afxdisp.h>
#include <atlbase.h>
#include <exception>
#include <memory>
#include <sstream>

class XmlElement { public: ~XmlElement(); };

extern "C" void __cdecl report_error(int, long, const char*, int);
extern const GUID workspaceInterface;
extern long __cdecl report_exception(const GUID&, const char*, unsigned int);
__declspec(noreturn) void __cdecl raise_error(long, const GUID&);

#define HRCHECK(x) ((void)(!(x) || (report_error(1, (x), ".\\Workspace.cpp", __LINE__), raise_error((x), workspaceInterface), 0)))

struct IPrimary : IUnknown {};
struct IXmlStream : IUnknown {};

struct StreamObject : IPrimary, IXmlStream
{
    long refs;
    std::stringstream stream;
    static HRESULT __stdcall CreateInstance(StreamObject**);
};

struct VCWorkspaceNativeView
{
    std::auto_ptr<XmlElement> writeXmlScripts();
    HRESULT write(XmlElement*, std::ostream*);
};

long __stdcall reconstruct(VCWorkspaceNativeView*, IXmlStream**);

long __stdcall reconstruct(VCWorkspaceNativeView* view, IXmlStream** result)
{
    AFX_MANAGE_STATE(AfxGetAppModuleState());
    try {
        StreamObject* object;
        {
            StreamObject* p;
#line 331
            HRCHECK(StreamObject::CreateInstance(&p));
            object = p;
        }
#line 334
        HRCHECK(view->write(view->writeXmlScripts().get(), &object->stream));
        CComPtr<IXmlStream> p(object);
#line 338
        HRCHECK(p.CopyTo(result));
    } catch (const std::exception& error) {
        return report_exception(workspaceInterface, error.what(), 0);
    } catch (CException* error) {
        long status = COleException::Process(error);
        error->Delete();
        return status;
    }
    return 0;
}
