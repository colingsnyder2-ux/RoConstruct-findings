// from server: 100% by colin
// roc 2007-08 005fd250  unit: RBX::ResizeTool  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd250
//
// 005fd250  56                   push esi
// 005fd251  57                   push edi
// 005fd252  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fd256  57                   push edi
// 005fd257  8bf1                 mov esi, ecx
// 005fd259  e872faffff           call 0x5fccd0
// 005fd25e  8b4628               mov eax, dword ptr [esi + 0x28]
// 005fd261  85c0                 test eax, eax
// 005fd263  7405                 je 0x5fd26a
// 005fd265  8b4004               mov eax, dword ptr [eax + 4]
// 005fd268  eb02                 jmp 0x5fd26c
// 005fd26a  33c0                 xor eax, eax
// 005fd26c  85c0                 test eax, eax
// 005fd26e  0f95c0               setne al
// 005fd271  57                   push edi
// 005fd272  8bce                 mov ecx, esi
// 005fd274  88462c               mov byte ptr [esi + 0x2c], al
// 005fd277  e8e40e0000           call 0x5fe160
// 005fd27c  5f                   pop edi
// 005fd27d  5e                   pop esi
// 005fd27e  c20400               ret 4

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
