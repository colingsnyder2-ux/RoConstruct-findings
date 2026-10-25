// from server: 100% by king_originala
// roc 2008-06 004dcaa0  unit: RBX::ViewNew::ViewG3D  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dcaa0
//
// 004dcaa0  8b442408             mov eax, dword ptr [esp + 8]
// 004dcaa4  8b0d34399700         mov ecx, dword ptr [0x973934]
// 004dcaaa  8b15fc389700         mov edx, dword ptr [0x9738fc]
// 004dcab0  8d0cc1               lea ecx, [ecx + eax*8]
// 004dcab3  56                   push esi
// 004dcab4  8b35f0389700         mov esi, dword ptr [0x9738f0]
// 004dcaba  8d0440               lea eax, [eax + eax*2]
// 004dcabd  57                   push edi
// 004dcabe  03c0                 add eax, eax
// 004dcac0  03c0                 add eax, eax
// 004dcac2  6a01                 push 1
// 004dcac4  03d0                 add edx, eax
// 004dcac6  51                   push ecx
// 004dcac7  03c6                 add eax, esi
// 004dcac9  52                   push edx
// 004dcaca  50                   push eax
// 004dcacb  e830b50600           call 0x548000
// 004dcad0  8b742430             mov esi, dword ptr [esp + 0x30]
// 004dcad4  8906                 mov dword ptr [esi], eax
// 004dcad6  8b442424             mov eax, dword ptr [esp + 0x24]
// 004dcada  8b0d34399700         mov ecx, dword ptr [0x973934]
// 004dcae0  8b15fc389700         mov edx, dword ptr [0x9738fc]
// 004dcae6  8b3df0389700         mov edi, dword ptr [0x9738f0]
// 004dcaec  8d0cc1               lea ecx, [ecx + eax*8]
// 004dcaef  8d0440               lea eax, [eax + eax*2]
// 004dcaf2  03c0                 add eax, eax
// 004dcaf4  03c0                 add eax, eax
// 004dcaf6  6a01                 push 1
// 004dcaf8  03d0                 add edx, eax
// 004dcafa  51                   push ecx
// 004dcafb  03c7                 add eax, edi
// 004dcafd  52                   push edx
// 004dcafe  50                   push eax
// 004dcaff  e8fcb40600           call 0x548000
// 004dcb04  894604               mov dword ptr [esi + 4], eax
// 004dcb07  8b442438             mov eax, dword ptr [esp + 0x38]
// 004dcb0b  8b0d34399700         mov ecx, dword ptr [0x973934]
// 004dcb11  8b15fc389700         mov edx, dword ptr [0x9738fc]
// 004dcb17  8b3df0389700         mov edi, dword ptr [0x9738f0]
// 004dcb1d  8d0cc1               lea ecx, [ecx + eax*8]
// 004dcb20  8d0440               lea eax, [eax + eax*2]
// 004dcb23  03c0                 add eax, eax
// 004dcb25  03c0                 add eax, eax
// 004dcb27  6a01                 push 1
// 004dcb29  03d0                 add edx, eax
// 004dcb2b  51                   push ecx
// 004dcb2c  03c7                 add eax, edi
// 004dcb2e  52                   push edx
// 004dcb2f  50                   push eax
// 004dcb30  e8cbb40600           call 0x548000
// 004dcb35  894608               mov dword ptr [esi + 8], eax
// 004dcb38  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004dcb3c  8b0d34399700         mov ecx, dword ptr [0x973934]
// 004dcb42  8b15fc389700         mov edx, dword ptr [0x9738fc]
// 004dcb48  8b3df0389700         mov edi, dword ptr [0x9738f0]
// 004dcb4e  8d0cc1               lea ecx, [ecx + eax*8]
// 004dcb51  8d0440               lea eax, [eax + eax*2]
// 004dcb54  03c0                 add eax, eax
// 004dcb56  03c0                 add eax, eax
// 004dcb58  6a01                 push 1
// 004dcb5a  03d0                 add edx, eax
// 004dcb5c  51                   push ecx
// 004dcb5d  03c7                 add eax, edi
// 004dcb5f  52                   push edx
// 004dcb60  50                   push eax
// 004dcb61  e89ab40600           call 0x548000
// 004dcb66  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dcb69  8b16                 mov edx, dword ptr [esi]
// 004dcb6b  89460c               mov dword ptr [esi + 0xc], eax
// 004dcb6e  89442450             mov dword ptr [esp + 0x50], eax
// 004dcb72  8b4608               mov eax, dword ptr [esi + 8]
// 004dcb75  83c440               add esp, 0x40
// 004dcb78  89442420             mov dword ptr [esp + 0x20], eax
// 004dcb7c  8d442410             lea eax, [esp + 0x10]
// 004dcb80  894c2414             mov dword ptr [esp + 0x14], ecx
// 004dcb84  50                   push eax
// 004dcb85  8d4c2424             lea ecx, [esp + 0x24]
// 004dcb89  8954241c             mov dword ptr [esp + 0x1c], edx
// 004dcb8d  51                   push ecx
// 004dcb8e  8d54241c             lea edx, [esp + 0x1c]
// 004dcb92  52                   push edx
// 004dcb93  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004dcb97  8b09                 mov ecx, dword ptr [ecx]
// 004dcb99  8d442424             lea eax, [esp + 0x24]
// 004dcb9d  50                   push eax
// 004dcb9e  83c10c               add ecx, 0xc
// 004dcba1  e8fafaffff           call 0x4dc6a0
// 004dcba6  5f                   pop edi
// 004dcba7  5e                   pop esi
// 004dcba8  c21800               ret 0x18

struct Vec3 { float x, y, z; };
struct Vec2 { float x, y; };

extern Vec3* positions;
extern Vec3* normals;
extern Vec2* texcoords;

extern int __cdecl makeVertex(const Vec3*, const Vec3*, const Vec2*, int);

struct Handle {
    int value;
    Handle(int);
};

inline Handle::Handle(int n) : value(n) {}

struct Renderer {
    void draw(const Handle&, const Handle&, const Handle&, const Handle&);
};

struct Context {
    char padding[12];
    Renderer renderer;
};

void __stdcall submit(Context** context, int a, int b, int c, int d, int* output)
{
    {
        Vec2* t = texcoords + a;
        Vec3* n = normals;
        Vec3* p = positions;
        n += a;
        p += a;
        output[0] = makeVertex(p, n, t, 1);
    }
    {
        Vec2* t = texcoords + b;
        Vec3* n = normals;
        Vec3* p = positions;
        n += b;
        p += b;
        output[1] = makeVertex(p, n, t, 1);
    }
    {
        Vec2* t = texcoords + c;
        Vec3* n = normals;
        Vec3* p = positions;
        n += c;
        p += c;
        output[2] = makeVertex(p, n, t, 1);
    }
    {
        Vec2* t = texcoords + d;
        Vec3* n = normals;
        Vec3* p = positions;
        n += d;
        p += d;
        output[3] = makeVertex(p, n, t, 1);
    }
    (*context)->renderer.draw(output[0], output[1], output[2], output[3]);
}
