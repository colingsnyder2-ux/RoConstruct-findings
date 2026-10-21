// from server: 100% by colin
// roc 2008-06 00411300  unit: ChatEnter  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411300
//
// 00411300  8b442408             mov eax, dword ptr [esp + 8]
// 00411304  83380a               cmp dword ptr [eax], 0xa
// 00411307  7530                 jne 0x411339
// 00411309  8378082f             cmp dword ptr [eax + 8], 0x2f
// 0041130d  752a                 jne 0x411339
// 0041130f  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00411312  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00411315  6a00                 push 0
// 00411317  6a00                 push 0
// 00411319  6868040000           push 0x468
// 0041131e  51                   push ecx
// 0041131f  ff150c2e8000         call dword ptr [0x802e0c]
// 00411325  8b442404             mov eax, dword ptr [esp + 4]
// 00411329  c70001000000         mov dword ptr [eax], 1
// 0041132f  c7400400000000       mov dword ptr [eax + 4], 0
// 00411336  c20800               ret 8
// 00411339  8b442404             mov eax, dword ptr [esp + 4]
// 0041133d  c70000000000         mov dword ptr [eax], 0
// 00411343  c7400400000000       mov dword ptr [eax + 4], 0
// 0041134a  c20800               ret 8

// from server: 96% by colin
extern "C" __declspec(dllimport) int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);
struct ChatEnter {
    char pad[0x14];
    void* field14;
    void method(int* out, int* a);
};
void ChatEnter::method(int* out, int* a)
{
    if (a[0] == 0xa && a[2] == 0x2f) {
        void* p = *(void**)((char*)field14 + 0x20);
        PostMessageA(p, 0x468, 0, 0);
        out[0] = 1;
        out[1] = 0;
    } else {
        out[0] = 0;
        out[1] = 0;
    }
}
