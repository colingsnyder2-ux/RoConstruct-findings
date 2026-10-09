// roc 2008-06 0071c770  unit: CXTPHookManager::CHookSink  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071c770
//
// 0071c770  53                   push ebx
// 0071c771  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0071c775  56                   push esi
// 0071c776  57                   push edi
// 0071c777  53                   push ebx
// 0071c778  8bf9                 mov edi, ecx
// 0071c77a  e8a1ffffff           call 0x71c720
// 0071c77f  8bf0                 mov esi, eax
// 0071c781  85f6                 test esi, esi
// 0071c783  7413                 je 0x71c798
// 0071c785  53                   push ebx
// 0071c786  8bcf                 mov ecx, edi
// 0071c788  e813faf9ff           call 0x6bc1a0
// 0071c78d  8b06                 mov eax, dword ptr [esi]
// 0071c78f  8b5004               mov edx, dword ptr [eax + 4]
// 0071c792  6a01                 push 1
// 0071c794  8bce                 mov ecx, esi
// 0071c796  ffd2                 call edx
// 0071c798  5f                   pop edi
// 0071c799  5e                   pop esi
// 0071c79a  5b                   pop ebx
// 0071c79b  c20400               ret 4
// copied from an identical function in another client (function ?DoRemove@CHookSink@ns_ROCX000026@ns_ROCX00003d@@QAEXH@Z)

namespace ns_ROCX000026 {
namespace ns_ROCX000000 {
struct CXTPPropertyGridView;

extern "C" CXTPPropertyGridView* __stdcall sub_69BC20(int);

struct CXTPPropertyGridView
{
    char pad[0x9c];
    int field_0x9c;
    void sub_6983C0();
    void sub_698420();
};

void __stdcall sub_69BC70(int a)
{
    CXTPPropertyGridView* p = sub_69BC20(a);
    if (p != 0)
    {
        if (p->field_0x9c != 0)
        {
            p->sub_6983C0();
        }
        else
        {
            p->sub_698420();
        }
    }
}
}
}
