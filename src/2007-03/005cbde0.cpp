// roc 2007-03 005cbde0  unit: seg_005c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cbde0
//
// 005cbde0  56                   push esi
// 005cbde1  57                   push edi
// 005cbde2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005cbde6  57                   push edi
// 005cbde7  8bf1                 mov esi, ecx
// 005cbde9  e872faffff           call 0x5cb860
// 005cbdee  8b4628               mov eax, dword ptr [esi + 0x28]
// 005cbdf1  85c0                 test eax, eax
// 005cbdf3  7405                 je 0x5cbdfa
// 005cbdf5  8b4004               mov eax, dword ptr [eax + 4]
// 005cbdf8  eb02                 jmp 0x5cbdfc
// 005cbdfa  33c0                 xor eax, eax
// 005cbdfc  85c0                 test eax, eax
// 005cbdfe  0f95c0               setne al
// 005cbe01  57                   push edi
// 005cbe02  8bce                 mov ecx, esi
// 005cbe04  88462c               mov byte ptr [esi + 0x2c], al
// 005cbe07  e8e4d9ffff           call 0x5c97f0
// 005cbe0c  5f                   pop edi
// 005cbe0d  5e                   pop esi
// 005cbe0e  c20400               ret 4
// copied from an identical function in another client (function ?onMouseDown@ResizeTool@ns_ROCX000025@@QAEXH@Z)

namespace ns_ROCX000025 {
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
