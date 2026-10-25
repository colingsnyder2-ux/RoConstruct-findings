// from server: 100% by king_originala
// roc 2008-06 007adb70  unit: RBX::RenderNew::TextureProxy  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007adb70
//
// 007adb70  d9ee                 fldz 
// 007adb72  56                   push esi
// 007adb73  8b742408             mov esi, dword ptr [esp + 8]
// 007adb77  d916                 fst dword ptr [esi]
// 007adb79  57                   push edi
// 007adb7a  d95604               fst dword ptr [esi + 4]
// 007adb7d  8bf9                 mov edi, ecx
// 007adb7f  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 007adb82  85c9                 test ecx, ecx
// 007adb84  7443                 je 0x7adbc9
// 007adb86  8b01                 mov eax, dword ptr [ecx]
// 007adb88  ddd8                 fstp st(0)
// 007adb8a  8b5064               mov edx, dword ptr [eax + 0x64]
// 007adb8d  ffd2                 call edx
// 007adb8f  8944240c             mov dword ptr [esp + 0xc], eax
// 007adb93  db44240c             fild dword ptr [esp + 0xc]
// 007adb97  85c0                 test eax, eax
// 007adb99  7d06                 jge 0x7adba1
// 007adb9b  d80578978100         fadd dword ptr [0x819778]
// 007adba1  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 007adba4  d91e                 fstp dword ptr [esi]
// 007adba6  8b01                 mov eax, dword ptr [ecx]
// 007adba8  8b5060               mov edx, dword ptr [eax + 0x60]
// 007adbab  ffd2                 call edx
// 007adbad  8944240c             mov dword ptr [esp + 0xc], eax
// 007adbb1  db44240c             fild dword ptr [esp + 0xc]
// 007adbb5  85c0                 test eax, eax
// 007adbb7  7d06                 jge 0x7adbbf
// 007adbb9  d80578978100         fadd dword ptr [0x819778]
// 007adbbf  5f                   pop edi
// 007adbc0  d95e04               fstp dword ptr [esi + 4]
// 007adbc3  8bc6                 mov eax, esi
// 007adbc5  5e                   pop esi
// 007adbc6  c20400               ret 4
// 007adbc9  d95604               fst dword ptr [esi + 4]
// 007adbcc  5f                   pop edi
// 007adbcd  d91e                 fstp dword ptr [esi]
// 007adbcf  8bc6                 mov eax, esi
// 007adbd1  5e                   pop esi
// 007adbd2  c20400               ret 4

struct Vector2
{
    float x;
    float y;
};

struct Texture
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual unsigned int height();
    virtual unsigned int width();
};

struct TextureProxy
{
    unsigned char padding[0x58];
    Texture* texture;

    Vector2 getSize();
};

Vector2 TextureProxy::getSize()
{
    Vector2 result = { 0.0f, 0.0f };
    Texture* current = texture;

    if (current)
    {
        result.x = (float)current->width();
        result.y = (float)texture->height();
    }
    else
    {
        result.y = 0.0f;
        result.x = 0.0f;
    }

    return result;
}
