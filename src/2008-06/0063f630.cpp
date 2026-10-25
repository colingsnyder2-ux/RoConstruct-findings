// from server: 100% by tester
// roc 2008-06 0063f630  unit: RBX::ResizeTool  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063f630
//
// 0063f630  56                   push esi
// 0063f631  57                   push edi
// 0063f632  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0063f636  57                   push edi
// 0063f637  8bf1                 mov esi, ecx
// 0063f639  e802faffff           call 0x63f040
// 0063f63e  8b4624               mov eax, dword ptr [esi + 0x24]
// 0063f641  85c0                 test eax, eax
// 0063f643  7405                 je 0x63f64a
// 0063f645  8b4004               mov eax, dword ptr [eax + 4]
// 0063f648  eb02                 jmp 0x63f64c
// 0063f64a  33c0                 xor eax, eax
// 0063f64c  85c0                 test eax, eax
// 0063f64e  0f95c0               setne al
// 0063f651  57                   push edi
// 0063f652  8bce                 mov ecx, esi
// 0063f654  884628               mov byte ptr [esi + 0x28], al
// 0063f657  e8540e0000           call 0x6404b0
// 0063f65c  5f                   pop edi
// 0063f65d  5e                   pop esi
// 0063f65e  c20400               ret 4

struct ResizeTool {
    char pad[0x24];
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
