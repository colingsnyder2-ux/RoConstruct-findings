// from server: 30% by colin
// roc 2007-08 004ef720  unit: RBX::Render::SceneManager  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ef720
//
// 004ef720  6aff                 push -1
// 004ef722  6848d37400           push 0x74d348
// 004ef727  64a100000000         mov eax, dword ptr fs:[0]
// 004ef72d  50                   push eax
// 004ef72e  51                   push ecx
// 004ef72f  56                   push esi
// 004ef730  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ef735  33c4                 xor eax, esp
// 004ef737  50                   push eax
// 004ef738  8d44240c             lea eax, [esp + 0xc]
// 004ef73c  64a300000000         mov dword ptr fs:[0], eax
// 004ef742  8bf1                 mov esi, ecx
// 004ef744  89742408             mov dword ptr [esp + 8], esi
// 004ef748  c7063cf57900         mov dword ptr [esi], 0x79f53c
// 004ef74e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004ef756  e835e1fdff           call 0x4cd890
// 004ef75b  c70610f07900         mov dword ptr [esi], 0x79f010
// 004ef761  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ef765  64890d00000000       mov dword ptr fs:[0], ecx
// 004ef76c  59                   pop ecx
// 004ef76d  5e                   pop esi
// 004ef76e  83c410               add esp, 0x10
// 004ef771  c3                   ret 

struct Resource {
    void construct();
};

struct SceneManager : Resource {
    SceneManager();
};

extern "C" void __cdecl sub_4CD890();

SceneManager::SceneManager()
{
    *(void**)this = (void*)0x79f53c;
    sub_4CD890();
    *(void**)this = (void*)0x79f010;
}
