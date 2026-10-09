// roc 2011-06 007e0df0  unit: RBX::ResizeTool  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e0df0
//
// 007e0df0  56                   push esi
// 007e0df1  57                   push edi
// 007e0df2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007e0df6  57                   push edi
// 007e0df7  8bf1                 mov esi, ecx
// 007e0df9  e8f2f9ffff           call 0x7e07f0
// 007e0dfe  8b4628               mov eax, dword ptr [esi + 0x28]
// 007e0e01  85c0                 test eax, eax
// 007e0e03  7405                 je 0x7e0e0a
// 007e0e05  8b4004               mov eax, dword ptr [eax + 4]
// 007e0e08  eb02                 jmp 0x7e0e0c
// 007e0e0a  33c0                 xor eax, eax
// 007e0e0c  85c0                 test eax, eax
// 007e0e0e  0f95c0               setne al
// 007e0e11  57                   push edi
// 007e0e12  8bce                 mov ecx, esi
// 007e0e14  88462c               mov byte ptr [esi + 0x2c], al
// 007e0e17  e8b40d0000           call 0x7e1bd0
// 007e0e1c  5f                   pop edi
// 007e0e1d  5e                   pop esi
// 007e0e1e  c20400               ret 4
// copied from an identical function in another client (function ?onMouseDown@ResizeTool@ns_ROCX000013@@QAEXH@Z)

namespace ns_ROCX000013 {
struct ResizeTool {
    char pad[0x28];
    void* ptr28;
    char overHandle;
    void onMouseDown(int);
    void findTargetPV(int);
};

void ResizeTool::onMouseDown(int a)
{
    findTargetPV(a);
    void* p = ptr28;
    if (p)
        p = *(void**)((char*)p + 4);
    else
        p = 0;
    overHandle = (p != 0);
    findTargetPV(a);
}
}
