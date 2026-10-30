// roc 2009-12 005dbd30  unit: boost::bad_lexical_cast  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005dbd30
//
// 005dbd30  56                   push esi
// 005dbd31  57                   push edi
// 005dbd32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005dbd36  57                   push edi
// 005dbd37  8bf1                 mov esi, ecx
// 005dbd39  ff15acb79800         call dword ptr [0x98b7ac]
// 005dbd3f  c70664139c00         mov dword ptr [esi], 0x9c1364
// 005dbd45  8b470c               mov eax, dword ptr [edi + 0xc]
// 005dbd48  89460c               mov dword ptr [esi + 0xc], eax
// 005dbd4b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005dbd4e  5f                   pop edi
// 005dbd4f  894e10               mov dword ptr [esi + 0x10], ecx
// 005dbd52  8bc6                 mov eax, esi
// 005dbd54  5e                   pop esi
// 005dbd55  c20400               ret 4
// copied from an identical function in another client (function ??0format_error@ns_ROCX000003@@QAE@ABU01@@Z)

namespace ns_ROCX000003 {
// from server: 100% by tajop
namespace std
{
class exception
{
public:
    __declspec(dllimport) exception(const exception &);
    __declspec(dllimport) virtual ~exception();
private:
    const char *_m_what;
    int _m_doFree;
};
}

struct format_error : public std::exception
{
    format_error(const format_error &o);
    unsigned int cur_;
    unsigned int expected_;
};

format_error::format_error(const format_error &o)
    : std::exception(o), cur_(o.cur_), expected_(o.expected_)
{
}
}