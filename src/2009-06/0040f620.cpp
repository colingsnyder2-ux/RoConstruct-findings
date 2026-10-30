// roc 2009-06 0040f620  unit: ChatEnter  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040f620
//
// 0040f620  8b442408             mov eax, dword ptr [esp + 8]
// 0040f624  83380a               cmp dword ptr [eax], 0xa
// 0040f627  7530                 jne 0x40f659
// 0040f629  8378082f             cmp dword ptr [eax + 8], 0x2f
// 0040f62d  752a                 jne 0x40f659
// 0040f62f  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0040f632  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0040f635  6a00                 push 0
// 0040f637  6a00                 push 0
// 0040f639  6868040000           push 0x468
// 0040f63e  51                   push ecx
// 0040f63f  ff159cee8900         call dword ptr [0x89ee9c]
// 0040f645  8b442404             mov eax, dword ptr [esp + 4]
// 0040f649  c70001000000         mov dword ptr [eax], 1
// 0040f64f  c7400400000000       mov dword ptr [eax + 4], 0
// 0040f656  c20800               ret 8
// 0040f659  8b442404             mov eax, dword ptr [esp + 4]
// 0040f65d  c70000000000         mov dword ptr [eax], 0
// 0040f663  c7400400000000       mov dword ptr [eax + 4], 0
// 0040f66a  c20800               ret 8
// copied from an identical function in another client (function ?method@ChatEnter@@QAEXPAH0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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