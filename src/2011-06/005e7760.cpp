// roc 2011-06 005e7760  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e7760
//
// 005e7760  56                   push esi
// 005e7761  57                   push edi
// 005e7762  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e7766  57                   push edi
// 005e7767  8bf1                 mov esi, ecx
// 005e7769  ff15580aa400         call dword ptr [0xa40a58]
// 005e776f  c706140ea900         mov dword ptr [esi], 0xa90e14
// 005e7775  8b470c               mov eax, dword ptr [edi + 0xc]
// 005e7778  89460c               mov dword ptr [esi + 0xc], eax
// 005e777b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005e777e  5f                   pop edi
// 005e777f  894e10               mov dword ptr [esi + 0x10], ecx
// 005e7782  8bc6                 mov eax, esi
// 005e7784  5e                   pop esi
// 005e7785  c20400               ret 4
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