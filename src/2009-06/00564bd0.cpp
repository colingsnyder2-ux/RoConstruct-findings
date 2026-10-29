// roc 2009-06 00564bd0  unit: boost::bad_lexical_cast  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00564bd0
//
// 00564bd0  56                   push esi
// 00564bd1  57                   push edi
// 00564bd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00564bd6  57                   push edi
// 00564bd7  8bf1                 mov esi, ecx
// 00564bd9  ff1568e98900         call dword ptr [0x89e968]
// 00564bdf  c706b4a78c00         mov dword ptr [esi], 0x8ca7b4
// 00564be5  8b470c               mov eax, dword ptr [edi + 0xc]
// 00564be8  89460c               mov dword ptr [esi + 0xc], eax
// 00564beb  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00564bee  5f                   pop edi
// 00564bef  894e10               mov dword ptr [esi + 0x10], ecx
// 00564bf2  8bc6                 mov eax, esi
// 00564bf4  5e                   pop esi
// 00564bf5  c20400               ret 4
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
