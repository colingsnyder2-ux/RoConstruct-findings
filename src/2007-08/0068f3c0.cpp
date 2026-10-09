// from server: 58% by colin
// roc 2007-08 0068f3c0  unit: CXTPDockingPane  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f3c0
//
// 0068f3c0  51                   push ecx
// 0068f3c1  56                   push esi
// 0068f3c2  8db1c0000000         lea esi, [ecx + 0xc0]
// 0068f3c8  6a00                 push 0
// 0068f3ca  6a0a                 push 0xa
// 0068f3cc  8bce                 mov ecx, esi
// 0068f3ce  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0068f3d6  ff1560e17700         call dword ptr [0x77e160]
// 0068f3dc  83f8ff               cmp eax, -1
// 0068f3df  7514                 jne 0x68f3f5
// 0068f3e1  56                   push esi
// 0068f3e2  8b742410             mov esi, dword ptr [esp + 0x10]
// 0068f3e6  8bce                 mov ecx, esi
// 0068f3e8  ff1574dd7700         call dword ptr [0x77dd74]
// 0068f3ee  8bc6                 mov eax, esi
// 0068f3f0  5e                   pop esi
// 0068f3f1  59                   pop ecx
// 0068f3f2  c20400               ret 4
// 0068f3f5  57                   push edi
// 0068f3f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0068f3fa  50                   push eax
// 0068f3fb  57                   push edi
// 0068f3fc  8bce                 mov ecx, esi
// 0068f3fe  ff152cd97700         call dword ptr [0x77d92c]
// 0068f404  8bc7                 mov eax, edi
// 0068f406  5f                   pop edi
// 0068f407  5e                   pop esi
// 0068f408  59                   pop ecx
// 0068f409  c20400               ret 4

struct CXTPDockingPane {
    char pad[0xc0];
    int field_c0;
    void* getPane(int index);
};

void* CXTPDockingPane::getPane(int index) {
    void* result = 0;
    int handle = ((int (__stdcall*)(void*, int, int))0x77e160)(&field_c0, 0xa, 0);
    if (handle == -1) {
        return ((void* (__stdcall*)(void*, void*))0x77dd74)(&field_c0, &result);
    }
    return ((void* (__stdcall*)(void*, void*, int))0x77d92c)(&field_c0, &result, handle);
}
