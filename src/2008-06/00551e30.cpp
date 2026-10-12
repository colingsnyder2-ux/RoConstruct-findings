// from server: 78% by king_originala
// roc 2008-06 00551e30  unit: RBX::Render::TextureProxy  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00551e30
//
// 00551e30  55                   push ebp
// 00551e31  8bec                 mov ebp, esp
// 00551e33  6aff                 push -1
// 00551e35  6855d97c00           push 0x7cd955
// 00551e3a  64a100000000         mov eax, dword ptr fs:[0]
// 00551e40  50                   push eax
// 00551e41  51                   push ecx
// 00551e42  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 00551e47  33c5                 xor eax, ebp
// 00551e49  50                   push eax
// 00551e4a  8d45f4               lea eax, [ebp - 0xc]
// 00551e4d  64a300000000         mov dword ptr fs:[0], eax
// 00551e53  894df0               mov dword ptr [ebp - 0x10], ecx
// 00551e56  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551e59  e892fdffff           call 0x551bf0
// 00551e5e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00551e65  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00551e68  c7008cd18200         mov dword ptr [eax], 0x82d18c
// 00551e6e  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551e71  83c130               add ecx, 0x30
// 00551e74  e897e9f9ff           call 0x4f0810
// 00551e79  c645fc01             mov byte ptr [ebp - 4], 1
// 00551e7d  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551e80  c6413400             mov byte ptr [ecx + 0x34], 0
// 00551e84  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 00551e87  8b4508               mov eax, dword ptr [ebp + 8]
// 00551e8a  894238               mov dword ptr [edx + 0x38], eax
// 00551e8d  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551e90  8a5510               mov dl, byte ptr [ebp + 0x10]
// 00551e93  88513c               mov byte ptr [ecx + 0x3c], dl
// 00551e96  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551e99  83c140               add ecx, 0x40
// 00551e9c  e80ff2feff           call 0x5410b0
// 00551ea1  c645fc02             mov byte ptr [ebp - 4], 2
// 00551ea5  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551ea8  83c144               add ecx, 0x44
// 00551eab  e800f2feff           call 0x5410b0
// 00551eb0  c645fc03             mov byte ptr [ebp - 4], 3
// 00551eb4  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551eb7  83c148               add ecx, 0x48
// 00551eba  e8016a1c00           call 0x7188c0
// 00551ebf  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551ec2  83c154               add ecx, 0x54
// 00551ec5  ff15884c8000         call dword ptr [0x804c88]
// 00551ecb  c645fc04             mov byte ptr [ebp - 4], 4
// 00551ecf  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00551ed2  50                   push eax
// 00551ed3  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00551ed6  83c10c               add ecx, 0xc
// 00551ed9  ff150c248000         call dword ptr [0x80240c]
// 00551edf  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00551ee6  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00551ee9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00551eec  64890d00000000       mov dword ptr fs:[0], ecx
// 00551ef3  59                   pop ecx
// 00551ef4  8be5                 mov esp, ebp
// 00551ef6  5d                   pop ebp
// 00551ef7  c20c00               ret 0xc

#pragma optimize("", off)
#pragma strict_gs_check(on)

struct String;
extern void (__thiscall *assignString)(String*, const String&);

struct String {
    unsigned char data[28];
};

struct Base {
    virtual ~Base();
    unsigned char reserved0[8];
    String name;
    unsigned char reserved1[8];
    Base();
};

struct IteratorBase {
    unsigned int link;
    IteratorBase();
    ~IteratorBase();
};

struct Reference {
    void* value;
    Reference();
    ~Reference();
};

struct EmptyState {
    unsigned char data[12];
    EmptyState();
};

struct TexturePtr {
    void* object;
    void* control;
    TexturePtr();
    ~TexturePtr();
};

struct TextureProxy : Base {
    IteratorBase iterator;
    bool flag;
    void* owner;
    bool option;
    Reference first;
    Reference second;
    EmptyState state;
    TexturePtr texture;

    TextureProxy(void*, const String&, bool);
    virtual ~TextureProxy();
};

TextureProxy::TextureProxy(void* p, const String& s, bool b)
    : Base(),
      iterator(),
      flag(false),
      owner(p),
      option(b),
      first(),
      second(),
      state(),
      texture()
{
    assignString(&name, s);
}
