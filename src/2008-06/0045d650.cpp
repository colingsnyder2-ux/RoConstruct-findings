// from server: 77% by colin
// roc 2008-06 0045d650  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045d650
//
// 0045d650  55                   push ebp
// 0045d651  8bec                 mov ebp, esp
// 0045d653  6aff                 push -1
// 0045d655  68522e7c00           push 0x7c2e52
// 0045d65a  64a100000000         mov eax, dword ptr fs:[0]
// 0045d660  50                   push eax
// 0045d661  64892500000000       mov dword ptr fs:[0], esp
// 0045d668  83ec40               sub esp, 0x40
// 0045d66b  53                   push ebx
// 0045d66c  56                   push esi
// 0045d66d  8bf1                 mov esi, ecx
// 0045d66f  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 0045d676  57                   push edi
// 0045d677  8965f0               mov dword ptr [ebp - 0x10], esp
// 0045d67a  8975ec               mov dword ptr [ebp - 0x14], esi
// 0045d67d  0f841c010000         je 0x45d79f
// 0045d683  83beac00000000       cmp dword ptr [esi + 0xac], 0
// 0045d68a  0f840f010000         je 0x45d79f
// 0045d690  e80b330100           call 0x4709a0
// 0045d695  50                   push eax
// 0045d696  8d4db4               lea ecx, [ebp - 0x4c]
// 0045d699  ff155c248000         call dword ptr [0x80245c]
// 0045d69f  68089d8100           push 0x819d08
// 0045d6a4  8d4dd0               lea ecx, [ebp - 0x30]
// 0045d6a7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0045d6ae  ff1558248000         call dword ptr [0x802458]
// 0045d6b4  8d45d0               lea eax, [ebp - 0x30]
// 0045d6b7  50                   push eax
// 0045d6b8  8d4db4               lea ecx, [ebp - 0x4c]
// 0045d6bb  51                   push ecx
// 0045d6bc  c645fc01             mov byte ptr [ebp - 4], 1
// 0045d6c0  e8eb490b00           call 0x5120b0
// 0045d6c5  83c408               add esp, 8
// 0045d6c8  8d4dd0               lea ecx, [ebp - 0x30]
// 0045d6cb  8ad8                 mov bl, al
// 0045d6cd  c645fc00             mov byte ptr [ebp - 4], 0
// 0045d6d1  ff1568248000         call dword ptr [0x802468]
// 0045d6d7  84db                 test bl, bl
// 0045d6d9  744b                 je 0x45d726
// 0045d6db  8bce                 mov ecx, esi
// 0045d6dd  e87ee7ffff           call 0x45be60
// 0045d6e2  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0045d6e5  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0045d6e8  52                   push edx
// 0045d6e9  50                   push eax
// 0045d6ea  8bce                 mov ecx, esi
// 0045d6ec  c645fc02             mov byte ptr [ebp - 4], 2
// 0045d6f0  e8cbfdffff           call 0x45d4c0
// 0045d6f5  8bbea4000000         mov edi, dword ptr [esi + 0xa4]
// 0045d6fb  393df4ef9600         cmp dword ptr [0x96eff4], edi
// 0045d701  0f8481000000         je 0x45d788
// 0045d707  8b17                 mov edx, dword ptr [edi]
// 0045d709  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0045d70f  8bcf                 mov ecx, edi
// 0045d711  ffd0                 call eax
// 0045d713  893df4ef9600         mov dword ptr [0x96eff4], edi
// 0045d719  eb6d                 jmp 0x45d788
// 0045d71b  b821d74500           mov eax, 0x45d721
// 0045d720  c3                   ret 
// 0045d721  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0045d724  eb62                 jmp 0x45d788
// 0045d726  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0045d729  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0045d72c  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0045d732  52                   push edx
// 0045d733  50                   push eax
// 0045d734  e897910100           call 0x4768d0
// 0045d739  8bbeac000000         mov edi, dword ptr [esi + 0xac]
// 0045d73f  8bcf                 mov ecx, edi
// 0045d741  e88ab50100           call 0x478cd0
// 0045d746  894510               mov dword ptr [ebp + 0x10], eax
// 0045d749  db4510               fild dword ptr [ebp + 0x10]
// 0045d74c  51                   push ecx
// 0045d74d  8bcf                 mov ecx, edi
// 0045d74f  d91c24               fstp dword ptr [esp]
// 0045d752  e8f9ac0100           call 0x478450
// 0045d757  894510               mov dword ptr [ebp + 0x10], eax
// 0045d75a  db4510               fild dword ptr [ebp + 0x10]
// 0045d75d  83ec0c               sub esp, 0xc
// 0045d760  8d4ddc               lea ecx, [ebp - 0x24]
// 0045d763  d95c2408             fstp dword ptr [esp + 8]
// 0045d767  d9ee                 fldz 
// 0045d769  d9542404             fst dword ptr [esp + 4]
// 0045d76d  d91c24               fstp dword ptr [esp]
// 0045d770  51                   push ecx
// 0045d771  e85ae2ffff           call 0x45b9d0
// 0045d776  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0045d77c  83c414               add esp, 0x14
// 0045d77f  8d55dc               lea edx, [ebp - 0x24]
// 0045d782  52                   push edx
// 0045d783  e8b8b00100           call 0x478840
// 0045d788  8d4db4               lea ecx, [ebp - 0x4c]
// 0045d78b  c6868b00000001       mov byte ptr [esi + 0x8b], 1
// 0045d792  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0045d799  ff1568248000         call dword ptr [0x802468]
// 0045d79f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0045d7a2  5f                   pop edi
// 0045d7a3  5e                   pop esi
// 0045d7a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0045d7ab  5b                   pop ebx
// 0045d7ac  8be5                 mov esp, ebp
// 0045d7ae  5d                   pop ebp
// 0045d7af  c20c00               ret 0xc

// from server: 93% by king_originala
struct String;

extern String* (__thiscall* copyString)(String*, const String&);
extern String* (__thiscall* makeString)(String*, const char*);
extern void (__thiscall* destroyString)(String*);

struct String {
    unsigned char data[28];

    String(const String& other) { copyString(this, other); }
    String(const char* text) { makeString(this, text); }
    ~String() { destroyString(this); }
};

extern const String& __cdecl rendererName();
extern bool __cdecl contains(const String&, const String&);
extern const char rendererPattern[];

struct Texture;

struct TextureVTable {
    void (__thiscall* entries[39])(Texture*);
};

struct Texture {
    TextureVTable* vtable;
};

extern Texture* currentTexture;

struct Table {
    unsigned char padding[0xA4];
    Texture* texture;
    unsigned char gap[4];
    unsigned int enabled;

    void prepare();
    void configure(unsigned int, unsigned int);
    void apply(unsigned int, unsigned int, unsigned int);
};

void Table::apply(unsigned int mode, unsigned int a, unsigned int b)
{
    if (!texture || !enabled)
        return;

    String renderer(rendererName());

    if (contains(renderer, String(rendererPattern))) {
        prepare();
        try {
            configure(a, b);
            Texture* selected = texture;
            if (currentTexture != selected) {
                selected->vtable->entries[38](selected);
                currentTexture = selected;
            }
        } catch (...) {
            prepare();
            throw;
        }
    } else {
        configure(a, b);
        Texture* selected = texture;
        if (currentTexture != selected) {
            selected->vtable->entries[38](selected);
            currentTexture = selected;
        }
    }
    prepare();
}
