// from server: 46% by colin
// roc 2007-08 0057adf0  unit: RBX::ArrowTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057adf0
//
// 0057adf0  8b442404             mov eax, dword ptr [esp + 4]
// 0057adf4  56                   push esi
// 0057adf5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057adf9  57                   push edi
// 0057adfa  56                   push esi
// 0057adfb  8bf9                 mov edi, ecx
// 0057adfd  50                   push eax
// 0057adfe  8d4c2418             lea ecx, [esp + 0x18]
// 0057ae02  e85907ffff           call 0x56b560
// 0057ae07  8b4604               mov eax, dword ptr [esi + 4]
// 0057ae0a  85c0                 test eax, eax
// 0057ae0c  741d                 je 0x57ae2b
// 0057ae0e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057ae11  2bc8                 sub ecx, eax
// 0057ae13  c1f903               sar ecx, 3
// 0057ae16  7413                 je 0x57ae2b
// 0057ae18  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057ae1c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057ae20  52                   push edx
// 0057ae21  50                   push eax
// 0057ae22  57                   push edi
// 0057ae23  56                   push esi
// 0057ae24  8bcf                 mov ecx, edi
// 0057ae26  e8f5ddfeff           call 0x568c20
// 0057ae2b  5f                   pop edi
// 0057ae2c  5e                   pop esi
// 0057ae2d  c21000               ret 0x10
// library rbxgs-raknet RakNetTypes.cpp

struct Vec3 {
    int x, y, z;
};

struct Vec3List {
    Vec3* begin;
    Vec3* end;
};

struct ArrowTool {
    void method(const Vec3& a, Vec3List* list, const Vec3& b, const Vec3& c);
};

extern "C" void __stdcall sub_56b560(Vec3* out, const Vec3* a, const Vec3* b);
extern "C" void __stdcall sub_568c20(ArrowTool* self, Vec3List* list, const Vec3* a, const Vec3* b);

void ArrowTool::method(const Vec3& a, Vec3List* list, const Vec3& b, const Vec3& c)
{
    Vec3 tmp;
    sub_56b560(&tmp, &a, &b);
    if (list->begin != 0) {
        if ((list->end - list->begin) != 0) {
            sub_568c20(this, list, &tmp, &c);
        }
    }
}
