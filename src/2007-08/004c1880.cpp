// from server: 95% by colin
// roc 2007-08 004c1880  unit: RakPeer  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c1880
//
// 004c1880  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c1884  53                   push ebx
// 004c1885  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004c1889  55                   push ebp
// 004c188a  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004c188e  56                   push esi
// 004c188f  57                   push edi
// 004c1890  50                   push eax
// 004c1891  8bf1                 mov esi, ecx
// 004c1893  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c1897  6a00                 push 0
// 004c1899  51                   push ecx
// 004c189a  53                   push ebx
// 004c189b  55                   push ebp
// 004c189c  8bce                 mov ecx, esi
// 004c189e  e85de4ffff           call 0x4bfd00
// 004c18a3  33ff                 xor edi, edi
// 004c18a5  39beac020000         cmp dword ptr [esi + 0x2ac], edi
// 004c18ab  7621                 jbe 0x4c18ce
// 004c18ad  8d4900               lea ecx, [ecx]
// 004c18b0  8b96a8020000         mov edx, dword ptr [esi + 0x2a8]
// 004c18b6  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 004c18b9  8b01                 mov eax, dword ptr [ecx]
// 004c18bb  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004c18be  53                   push ebx
// 004c18bf  55                   push ebp
// 004c18c0  56                   push esi
// 004c18c1  ffd2                 call edx
// 004c18c3  83c701               add edi, 1
// 004c18c6  3bbeac020000         cmp edi, dword ptr [esi + 0x2ac]
// 004c18cc  72e2                 jb 0x4c18b0
// 004c18ce  5f                   pop edi
// 004c18cf  5e                   pop esi
// 004c18d0  5d                   pop ebp
// 004c18d1  5b                   pop ebx
// 004c18d2  c21000               ret 0x10

struct RakPeer {
    void sub_4BFD00(int, int, int, int, int);
    void method(int, int, int, int);
};

void RakPeer::method(int a, int b, int c, int d)
{
    sub_4BFD00(a, b, c, 0, d);
    unsigned int i = 0;
    while (i < *(unsigned int*)((char*)this + 0x2ac)) {
        void* p = *(void**)((char*)this + 0x2a8);
        void* obj = *(void**)((char*)p + i * 4);
        void** vtbl = *(void***)obj;
        void (__stdcall *fn)(int, int, void*) = (void (__stdcall *)(int, int, void*))vtbl[7];
        fn(a, b, this);
        i++;
    }
}
