// from server: 49% by colin
// roc 2007-08 00564b50  unit: RBX::RedoState  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564b50
//
// 00564b50  64a100000000         mov eax, dword ptr fs:[0]
// 00564b56  6aff                 push -1
// 00564b58  68a9c97500           push 0x75c9a9
// 00564b5d  50                   push eax
// 00564b5e  64892500000000       mov dword ptr fs:[0], esp
// 00564b65  56                   push esi
// 00564b66  8bf1                 mov esi, ecx
// 00564b68  8d442414             lea eax, [esp + 0x14]
// 00564b6c  50                   push eax
// 00564b6d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00564b75  e85680fcff           call 0x52cbd0
// 00564b7a  83c404               add esp, 4
// 00564b7d  50                   push eax
// 00564b7e  8bce                 mov ecx, esi
// 00564b80  e80bfeffff           call 0x564990
// 00564b85  8d4c2414             lea ecx, [esp + 0x14]
// 00564b89  8bf0                 mov esi, eax
// 00564b8b  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00564b93  ff15ace67700         call dword ptr [0x77e6ac]
// 00564b99  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00564b9d  8bc6                 mov eax, esi
// 00564b9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00564ba6  5e                   pop esi
// 00564ba7  83c40c               add esp, 0xc
// 00564baa  c21c00               ret 0x1c

struct RBX_RedoState {
    int construct(int, int, int, int, int, int, int);
};

extern "C" void __cdecl sub_52CBD0(void*);
extern "C" int __stdcall sub_564990(void*);
extern "C" void __stdcall sub_77E6AC(void*);

int RBX_RedoState::construct(int a, int b, int c, int d, int e, int f, int g)
{
    char buf[16];
    sub_52CBD0(buf);
    int r = sub_564990(buf);
    sub_77E6AC(buf);
    return r;
}
