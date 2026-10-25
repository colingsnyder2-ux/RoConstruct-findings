// from server: 100% by king_originala
// roc 2008-06 007b76e0  unit: RBX::RenderBase::RenderSceneBase  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b76e0
//
// 007b76e0  56                   push esi
// 007b76e1  57                   push edi
// 007b76e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b76e6  8a4704               mov al, byte ptr [edi + 4]
// 007b76e9  8bf1                 mov esi, ecx
// 007b76eb  884604               mov byte ptr [esi + 4], al
// 007b76ee  8b4f08               mov ecx, dword ptr [edi + 8]
// 007b76f1  51                   push ecx
// 007b76f2  8d4e08               lea ecx, [esi + 8]
// 007b76f5  e8a618deff           call 0x598fa0
// 007b76fa  8b570c               mov edx, dword ptr [edi + 0xc]
// 007b76fd  52                   push edx
// 007b76fe  8d4e0c               lea ecx, [esi + 0xc]
// 007b7701  e89a18deff           call 0x598fa0
// 007b7706  d94710               fld dword ptr [edi + 0x10]
// 007b7709  d95e10               fstp dword ptr [esi + 0x10]
// 007b770c  8bc6                 mov eax, esi
// 007b770e  d94714               fld dword ptr [edi + 0x14]
// 007b7711  d95e14               fstp dword ptr [esi + 0x14]
// 007b7714  d94718               fld dword ptr [edi + 0x18]
// 007b7717  d95e18               fstp dword ptr [esi + 0x18]
// 007b771a  d9471c               fld dword ptr [edi + 0x1c]
// 007b771d  d95e1c               fstp dword ptr [esi + 0x1c]
// 007b7720  d94720               fld dword ptr [edi + 0x20]
// 007b7723  d95e20               fstp dword ptr [esi + 0x20]
// 007b7726  d94724               fld dword ptr [edi + 0x24]
// 007b7729  d95e24               fstp dword ptr [esi + 0x24]
// 007b772c  d94728               fld dword ptr [edi + 0x28]
// 007b772f  5f                   pop edi
// 007b7730  d95e28               fstp dword ptr [esi + 0x28]
// 007b7733  5e                   pop esi
// 007b7734  c20400               ret 4

struct PointerSlot {
    void* value;
    void assign(void* value);
};

struct S_func_007b76e0 {
    char pad0[4];
    unsigned char flag;
    char pad1[3];
    PointerSlot first;
    PointerSlot second;
    float x10;
    float x14;
    float x18;
    float x1c;
    float x20;
    float x24;
    float x28;

    S_func_007b76e0& f(const S_func_007b76e0& source);
};

S_func_007b76e0& S_func_007b76e0::f(const S_func_007b76e0& source)
{
    flag = source.flag;
    first.assign(source.first.value);
    second.assign(source.second.value);
    x10 = source.x10;
    x14 = source.x14;
    x18 = source.x18;
    x1c = source.x1c;
    x20 = source.x20;
    x24 = source.x24;
    x28 = source.x28;
    return *this;
}
