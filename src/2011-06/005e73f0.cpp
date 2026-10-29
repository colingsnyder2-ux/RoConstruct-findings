// roc 2011-06 005e73f0  unit: std::D::DU?$char_traits::?$basic_altstringbuf  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e73f0
//
// 005e73f0  56                   push esi
// 005e73f1  57                   push edi
// 005e73f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e73f6  57                   push edi
// 005e73f7  8bf1                 mov esi, ecx
// 005e73f9  ff15580aa400         call dword ptr [0xa40a58]
// 005e73ff  c706b40da900         mov dword ptr [esi], 0xa90db4
// 005e7405  8b470c               mov eax, dword ptr [edi + 0xc]
// 005e7408  89460c               mov dword ptr [esi + 0xc], eax
// 005e740b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005e740e  5f                   pop edi
// 005e740f  894e10               mov dword ptr [esi + 0x10], ecx
// 005e7412  8bc6                 mov eax, esi
// 005e7414  5e                   pop esi
// 005e7415  c20400               ret 4
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