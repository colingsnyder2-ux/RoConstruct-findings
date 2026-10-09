// from server: 97% by colin
// roc 2007-08 00537c70  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537c70
//
// 00537c70  56                   push esi
// 00537c71  8bf1                 mov esi, ecx
// 00537c73  e848600300           call 0x56dcc0
// 00537c78  6a08                 push 8
// 00537c7a  8906                 mov dword ptr [esi], eax
// 00537c7c  e875820f00           call 0x62fef6
// 00537c81  83c404               add esp, 4
// 00537c84  85c0                 test eax, eax
// 00537c86  7411                 je 0x537c99
// 00537c88  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537c8c  c7007c577a00         mov dword ptr [eax], 0x7a577c
// 00537c92  8b11                 mov edx, dword ptr [ecx]
// 00537c94  895004               mov dword ptr [eax + 4], edx
// 00537c97  eb02                 jmp 0x537c9b
// 00537c99  33c0                 xor eax, eax
// 00537c9b  8b4e04               mov ecx, dword ptr [esi + 4]
// 00537c9e  85c9                 test ecx, ecx
// 00537ca0  894604               mov dword ptr [esi + 4], eax
// 00537ca3  7408                 je 0x537cad
// 00537ca5  8b01                 mov eax, dword ptr [ecx]
// 00537ca7  8b10                 mov edx, dword ptr [eax]
// 00537ca9  6a01                 push 1
// 00537cab  ffd2                 call edx
// 00537cad  8bc6                 mov eax, esi
// 00537caf  5e                   pop esi
// 00537cb0  c20400               ret 4

struct LiveThreadRef;

struct ThreadRef {
    int* liveThreadRef;
    void* node;
    ThreadRef(LiveThreadRef* ref);
};

extern "C" int* __cdecl sub_0056dcc0();
extern "C" void* __cdecl sub_0062fef6(unsigned int size);

struct VNode {
    int vtbl;
    int ref;
};

ThreadRef::ThreadRef(LiveThreadRef* ref)
{
    liveThreadRef = sub_0056dcc0();
    VNode* n = (VNode*)sub_0062fef6(8);
    if (n) {
        n->vtbl = 0x7a577c;
        n->ref = *(int*)ref;
    } else {
        n = 0;
    }
    void* old = node;
    node = n;
    if (old) {
        (*(void (__stdcall **)(int))(*(int*)old))(1);
    }
}
