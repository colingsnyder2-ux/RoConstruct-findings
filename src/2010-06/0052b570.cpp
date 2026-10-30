// roc 2010-06 0052b570  unit: boost::bad_lexical_cast  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052b570
//
// 0052b570  56                   push esi
// 0052b571  57                   push edi
// 0052b572  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0052b576  57                   push edi
// 0052b577  8bf1                 mov esi, ecx
// 0052b579  ff1594a89e00         call dword ptr [0x9ea894]
// 0052b57f  c7066ceba100         mov dword ptr [esi], 0xa1eb6c
// 0052b585  8b470c               mov eax, dword ptr [edi + 0xc]
// 0052b588  89460c               mov dword ptr [esi + 0xc], eax
// 0052b58b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0052b58e  5f                   pop edi
// 0052b58f  894e10               mov dword ptr [esi + 0x10], ecx
// 0052b592  8bc6                 mov eax, esi
// 0052b594  5e                   pop esi
// 0052b595  c20400               ret 4
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