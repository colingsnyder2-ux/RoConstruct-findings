// from server: 100% by Espeon
// roc 2008-06 00437cd0  unit: G3D::VVector3::?$XItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437cd0
//
// 00437cd0  81ec04010000         sub esp, 0x104
// 00437cd6  8b842408010000       mov eax, dword ptr [esp + 0x108]
// 00437cdd  d94008               fld dword ptr [eax + 8]
// 00437ce0  56                   push esi
// 00437ce1  83ec18               sub esp, 0x18
// 00437ce4  dd5c2410             fstp qword ptr [esp + 0x10]
// 00437ce8  8bf1                 mov esi, ecx
// 00437cea  d94004               fld dword ptr [eax + 4]
// 00437ced  dd5c2408             fstp qword ptr [esp + 8]
// 00437cf1  d900                 fld dword ptr [eax]
// 00437cf3  8d442420             lea eax, [esp + 0x20]
// 00437cf7  dd1c24               fstp qword ptr [esp]
// 00437cfa  6834378100           push 0x813734
// 00437cff  50                   push eax
// 00437d00  ff1530288000         call dword ptr [0x802830]
// 00437d06  83c41c               add esp, 0x1c
// 00437d09  8d54240c             lea edx, [esp + 0xc]
// 00437d0d  8bcc                 mov ecx, esp
// 00437d0f  89642408             mov dword ptr [esp + 8], esp
// 00437d13  52                   push edx
// 00437d14  ff15103f8000         call dword ptr [0x803f10]
// 00437d1a  8b06                 mov eax, dword ptr [esi]
// 00437d1c  8b5060               mov edx, dword ptr [eax + 0x60]
// 00437d1f  8bce                 mov ecx, esi
// 00437d21  ffd2                 call edx
// 00437d23  5e                   pop esi
// 00437d24  81c404010000         add esp, 0x104
// 00437d2a  c20400               ret 4

extern "C" __declspec(dllimport) int __cdecl sprintf(char*, const char*, ...);
struct VVector3 {float x,y,z;};
struct CString {void* data;__declspec(dllimport) CString(const char*);__declspec(dllimport) CString(const CString&);__declspec(dllimport) ~CString();};
struct XItem {virtual void unused00();virtual void unused01();virtual void unused02();virtual void unused03();virtual void unused04();virtual void unused05();virtual void unused06();virtual void unused07();virtual void unused08();virtual void unused09();virtual void unused10();virtual void unused11();virtual void unused12();virtual void unused13();virtual void unused14();virtual void unused15();virtual void unused16();virtual void unused17();virtual void unused18();virtual void unused19();virtual void unused20();virtual void unused21();virtual void unused22();virtual void unused23();virtual void setValue(CString);void format(VVector3*);};
void XItem::format(VVector3* v) {char buf[256];sprintf(buf,"%.3g, %.3g, %.3g",v->x,v->y,v->z);setValue(CString(buf));}
