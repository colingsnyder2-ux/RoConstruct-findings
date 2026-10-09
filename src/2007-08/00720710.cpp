// from server: 100% by colin
// roc 2007-08 00720710  unit: CXTWindowMap  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720710
//
// 00720710  53                   push ebx
// 00720711  56                   push esi
// 00720712  8b742410             mov esi, dword ptr [esp + 0x10]
// 00720716  57                   push edi
// 00720717  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0072071b  57                   push edi
// 0072071c  8bd9                 mov ebx, ecx
// 0072071e  e81dfeffff           call 0x720540
// 00720723  57                   push edi
// 00720724  8bcb                 mov ecx, ebx
// 00720726  89460c               mov dword ptr [esi + 0xc], eax
// 00720729  e88a820100           call 0x7389b8
// 0072072e  8930                 mov dword ptr [eax], esi
// 00720730  8b460c               mov eax, dword ptr [esi + 0xc]
// 00720733  85c0                 test eax, eax
// 00720735  7520                 jne 0x720757
// 00720737  6afc                 push -4
// 00720739  57                   push edi
// 0072073a  ff1534ec7700         call dword ptr [0x77ec34]
// 00720740  6870067200           push 0x720670
// 00720745  6afc                 push -4
// 00720747  57                   push edi
// 00720748  894608               mov dword ptr [esi + 8], eax
// 0072074b  ff1518ec7700         call dword ptr [0x77ec18]
// 00720751  5f                   pop edi
// 00720752  5e                   pop esi
// 00720753  5b                   pop ebx
// 00720754  c20800               ret 8
// 00720757  8b4008               mov eax, dword ptr [eax + 8]
// 0072075a  5f                   pop edi
// 0072075b  894608               mov dword ptr [esi + 8], eax
// 0072075e  5e                   pop esi
// 0072075f  5b                   pop ebx
// 00720760  c20800               ret 8

struct CXTWindowMap {
    void* sub_720540(void*);
    void* sub_7389b8(void*);
    void Insert(void*, void*);
};

extern "C" {
    long (__stdcall *GetWindowLongA)(void*, int);
    long (__stdcall *SetWindowLongA)(void*, int, long);
}

void CXTWindowMap::Insert(void* a, void* b)
{
    void* p = sub_720540(a);
    *(void**)((char*)b + 0xc) = p;
    void* q = sub_7389b8(a);
    *(void**)q = b;
    void* r = *(void**)((char*)b + 0xc);
    if (r == 0) {
        long v = GetWindowLongA(a, -4);
        *(long*)((char*)b + 8) = v;
        SetWindowLongA(a, -4, (long)0x720670);
    } else {
        *(void**)((char*)b + 8) = *(void**)((char*)r + 8);
    }
}
