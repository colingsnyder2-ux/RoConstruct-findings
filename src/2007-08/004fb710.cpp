// from server: 32% by colin
// roc 2007-08 004fb710  unit: RBX::Render::TextureProxy  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fb710
//
// 004fb710  6aff                 push -1
// 004fb712  68d8e57400           push 0x74e5d8
// 004fb717  64a100000000         mov eax, dword ptr fs:[0]
// 004fb71d  50                   push eax
// 004fb71e  51                   push ecx
// 004fb71f  56                   push esi
// 004fb720  a188518b00           mov eax, dword ptr [0x8b5188]
// 004fb725  33c4                 xor eax, esp
// 004fb727  50                   push eax
// 004fb728  8d44240c             lea eax, [esp + 0xc]
// 004fb72c  64a300000000         mov dword ptr fs:[0], eax
// 004fb732  8bf1                 mov esi, ecx
// 004fb734  89742408             mov dword ptr [esp + 8], esi
// 004fb738  c7067cf87900         mov dword ptr [esi], 0x79f87c
// 004fb73e  8d4e0c               lea ecx, [esi + 0xc]
// 004fb741  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004fb749  e8d2fdffff           call 0x4fb520
// 004fb74e  c70684797900         mov dword ptr [esi], 0x797984
// 004fb754  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004fb758  64890d00000000       mov dword ptr fs:[0], ecx
// 004fb75f  59                   pop ecx
// 004fb760  5e                   pop esi
// 004fb761  83c410               add esp, 0x10
// 004fb764  c3                   ret 

struct TextureProxyBase {
    void construct();
};

struct TextureProxy : TextureProxyBase {
    void construct();
};

void TextureProxy::construct()
{
    *(int*)this = 0x79f87c;
    *(int*)((char*)this + 0xc) = 0;
    ((TextureProxyBase*)((char*)this + 0xc))->construct();
    *(int*)this = 0x797984;
}
