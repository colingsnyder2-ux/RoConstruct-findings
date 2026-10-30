// roc 2007-08 004f3740  unit: boost::bad_lexical_cast  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3740
//
// 004f3740  56                   push esi
// 004f3741  57                   push edi
// 004f3742  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f3746  57                   push edi
// 004f3747  8bf1                 mov esi, ecx
// 004f3749  ff1518e77700         call dword ptr [0x77e718]
// 004f374f  c70684f57900         mov dword ptr [esi], 0x79f584
// 004f3755  8b470c               mov eax, dword ptr [edi + 0xc]
// 004f3758  89460c               mov dword ptr [esi + 0xc], eax
// 004f375b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 004f375e  5f                   pop edi
// 004f375f  894e10               mov dword ptr [esi + 0x10], ecx
// 004f3762  8bc6                 mov eax, esi
// 004f3764  5e                   pop esi
// 004f3765  c20400               ret 4
// copied from an identical function in another client (function ??0format_error@@QAE@ABU0@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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