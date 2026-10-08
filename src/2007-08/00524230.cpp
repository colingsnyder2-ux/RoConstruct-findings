// from server: 66% by colin
// roc 2007-08 00524230  unit: G3D::Line  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524230
//
// 00524230  56                   push esi
// 00524231  57                   push edi
// 00524232  8bf9                 mov edi, ecx
// 00524234  e87762feff           call 0x50a4b0
// 00524239  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052423d  50                   push eax
// 0052423e  8bce                 mov ecx, esi
// 00524240  e88b53feff           call 0x5095d0
// 00524245  56                   push esi
// 00524246  8bcf                 mov ecx, edi
// 00524248  e8b3feffff           call 0x524100
// 0052424d  5f                   pop edi
// 0052424e  8bc6                 mov eax, esi
// 00524250  5e                   pop esi
// 00524251  c20400               ret 4

struct Vector3d {
    float x, y, z;
};

struct Line {
    Vector3d mP1;
    Vector3d mP2;
    Line(const Vector3d& from, const Vector3d& to);
};

extern "C" void* __fastcall sub_50a4b0();
extern "C" void __fastcall sub_5095d0(void* self, void* arg);
extern "C" void __fastcall sub_524100(Line* self, Vector3d* arg);

Line::Line(const Vector3d& from, const Vector3d& to)
{
    void* p = sub_50a4b0();
    sub_5095d0(p, (void*)&from);
    sub_524100(this, (Vector3d*)&to);
}
