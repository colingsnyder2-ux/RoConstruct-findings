// roc 2011-06 00618a70  unit: RBX::ScriptContext  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00618a70
//
// 00618a70  56                   push esi
// 00618a71  57                   push edi
// 00618a72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00618a76  57                   push edi
// 00618a77  8bf1                 mov esi, ecx
// 00618a79  ff15080aa400         call dword ptr [0xa40a08]
// 00618a7f  c7062445a900         mov dword ptr [esi], 0xa94524
// 00618a85  8b470c               mov eax, dword ptr [edi + 0xc]
// 00618a88  89460c               mov dword ptr [esi + 0xc], eax
// 00618a8b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00618a8e  5f                   pop edi
// 00618a8f  894e10               mov dword ptr [esi + 0x10], ecx
// 00618a92  8bc6                 mov eax, esi
// 00618a94  5e                   pop esi
// 00618a95  c20400               ret 4
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