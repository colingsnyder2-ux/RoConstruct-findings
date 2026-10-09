// from server: 80% by colin
// roc 2007-08 0066e8a0  unit: CXTPDockingPaneManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e8a0
//
// 0066e8a0  56                   push esi
// 0066e8a1  e8baf8ffff           call 0x66e160
// 0066e8a6  8b4004               mov eax, dword ptr [eax + 4]
// 0066e8a9  85c0                 test eax, eax
// 0066e8ab  741e                 je 0x66e8cb
// 0066e8ad  8b742408             mov esi, dword ptr [esp + 8]
// 0066e8b1  8bd0                 mov edx, eax
// 0066e8b3  8b4a08               mov ecx, dword ptr [edx + 8]
// 0066e8b6  85c9                 test ecx, ecx
// 0066e8b8  8b00                 mov eax, dword ptr [eax]
// 0066e8ba  7405                 je 0x66e8c1
// 0066e8bc  83c120               add ecx, 0x20
// 0066e8bf  eb02                 jmp 0x66e8c3
// 0066e8c1  33c9                 xor ecx, ecx
// 0066e8c3  3bce                 cmp ecx, esi
// 0066e8c5  740a                 je 0x66e8d1
// 0066e8c7  85c0                 test eax, eax
// 0066e8c9  75e6                 jne 0x66e8b1
// 0066e8cb  33c0                 xor eax, eax
// 0066e8cd  5e                   pop esi
// 0066e8ce  c20800               ret 8
// 0066e8d1  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0066e8d6  7407                 je 0x66e8df
// 0066e8d8  8b420c               mov eax, dword ptr [edx + 0xc]
// 0066e8db  5e                   pop esi
// 0066e8dc  c20800               ret 8
// 0066e8df  8b4210               mov eax, dword ptr [edx + 0x10]
// 0066e8e2  5e                   pop esi
// 0066e8e3  c20800               ret 8

struct CXTPDockingPaneManager
{
    void* func_0066e160();
    void* func_0066e8a0(void* pane, int flag);
};

void* CXTPDockingPaneManager::func_0066e8a0(void* pane, int flag)
{
    void* node = (void*)func_0066e160();
    node = *(void**)((char*)node + 4);
    if (node == 0)
        return 0;

    void* found = 0;
    while (node != 0)
    {
        void* item = *(void**)((char*)node + 8);
        void* next = *(void**)node;
        void* key;
        if (item != 0)
            key = (char*)item + 0x20;
        else
            key = 0;
        if (key == pane)
        {
            found = node;
            break;
        }
        node = next;
    }

    if (found == 0)
        return 0;

    if (flag != 0)
        return *(void**)((char*)found + 0xc);
    return *(void**)((char*)found + 0x10);
}
