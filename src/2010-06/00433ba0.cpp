// roc 2010-06 00433ba0  unit: G3D::VVector3::?$XItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00433ba0
//
// 00433ba0  81ec04010000         sub esp, 0x104
// 00433ba6  8b842408010000       mov eax, dword ptr [esp + 0x108]
// 00433bad  d94008               fld dword ptr [eax + 8]
// 00433bb0  56                   push esi
// 00433bb1  83ec18               sub esp, 0x18
// 00433bb4  dd5c2410             fstp qword ptr [esp + 0x10]
// 00433bb8  8bf1                 mov esi, ecx
// 00433bba  d94004               fld dword ptr [eax + 4]
// 00433bbd  dd5c2408             fstp qword ptr [esp + 8]
// 00433bc1  d900                 fld dword ptr [eax]
// 00433bc3  8d442420             lea eax, [esp + 0x20]
// 00433bc7  dd1c24               fstp qword ptr [esp]
// 00433bca  68dc77a000           push 0xa077dc
// 00433bcf  50                   push eax
// 00433bd0  ff1564a89e00         call dword ptr [0x9ea864]
// 00433bd6  83c41c               add esp, 0x1c
// 00433bd9  8d54240c             lea edx, [esp + 0xc]
// 00433bdd  8bcc                 mov ecx, esp
// 00433bdf  89642408             mov dword ptr [esp + 8], esp
// 00433be3  52                   push edx
// 00433be4  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00433bea  8b06                 mov eax, dword ptr [esi]
// 00433bec  8b5060               mov edx, dword ptr [eax + 0x60]
// 00433bef  8bce                 mov ecx, esi
// 00433bf1  ffd2                 call edx
// 00433bf3  5e                   pop esi
// 00433bf4  81c404010000         add esp, 0x104
// 00433bfa  c20400               ret 4
// copied from an identical function in another client (function ?format@XItem@@QAEXPAUVVector3@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" __declspec(dllimport) int __cdecl sprintf(char*, const char*, ...);
struct VVector3 {float x,y,z;};
struct CString {void* data;__declspec(dllimport) CString(const char*);__declspec(dllimport) CString(const CString&);__declspec(dllimport) ~CString();};
struct XItem {virtual void unused00();virtual void unused01();virtual void unused02();virtual void unused03();virtual void unused04();virtual void unused05();virtual void unused06();virtual void unused07();virtual void unused08();virtual void unused09();virtual void unused10();virtual void unused11();virtual void unused12();virtual void unused13();virtual void unused14();virtual void unused15();virtual void unused16();virtual void unused17();virtual void unused18();virtual void unused19();virtual void unused20();virtual void unused21();virtual void unused22();virtual void unused23();virtual void setValue(CString);void format(VVector3*);};
void XItem::format(VVector3* v) {char buf[256];sprintf(buf,"%.3g, %.3g, %.3g",v->x,v->y,v->z);setValue(CString(buf));}