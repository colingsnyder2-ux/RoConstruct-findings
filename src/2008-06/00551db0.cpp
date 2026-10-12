// from server: 74% by king_originala
// roc 2008-06 00551db0  unit: RBX::Render::TextureProxy  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00551db0
//
// 00551db0  55                   push ebp
// 00551db1  8bec                 mov ebp, esp
// 00551db3  6aff                 push -1
// 00551db5  68fed87c00           push 0x7cd8fe
// 00551dba  64a100000000         mov eax, dword ptr fs:[0]
// 00551dc0  50                   push eax
// 00551dc1  51                   push ecx
// 00551dc2  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 00551dc7  33c5                 xor eax, ebp
// 00551dc9  50                   push eax
// 00551dca  8d45f4               lea eax, [ebp - 0xc]
// 00551dcd  64a300000000         mov dword ptr fs:[0], eax
// 00551dd3  894df0               mov dword ptr [ebp - 0x10], ecx
// 00551dd6  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00551ddd  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551de0  83c144               add ecx, 0x44
// 00551de3  e8880cfbff           call 0x502a70
// 00551de8  c645fc01             mov byte ptr [ebp - 4], 1
// 00551dec  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551def  83c140               add ecx, 0x40
// 00551df2  e8790cfbff           call 0x502a70
// 00551df7  c645fc00             mov byte ptr [ebp - 4], 0
// 00551dfb  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551dfe  83c130               add ecx, 0x30
// 00551e01  e86a0cfbff           call 0x502a70
// 00551e06  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00551e0d  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551e10  e8dbfeffff           call 0x551cf0
// 00551e15  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00551e18  64890d00000000       mov dword ptr fs:[0], ecx
// 00551e1f  59                   pop ecx
// 00551e20  8be5                 mov esp, ebp
// 00551e22  5d                   pop ebp
// 00551e23  c3                   ret 

#pragma optimize("", off)

struct Reference {
    void* value;
    ~Reference();
};

struct Base {
    char storage[0x30];
    ~Base();
};

struct TextureProxy : Base {
    Reference first;
    char padding[0x0c];
    Reference second;
    Reference third;

    ~TextureProxy();
};

TextureProxy::~TextureProxy()
{
}
