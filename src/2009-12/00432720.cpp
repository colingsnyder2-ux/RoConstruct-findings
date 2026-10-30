// roc 2009-12 00432720  unit: G3D::VVector3::?$XItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00432720
//
// 00432720  81ec04010000         sub esp, 0x104
// 00432726  8b842408010000       mov eax, dword ptr [esp + 0x108]
// 0043272d  d94008               fld dword ptr [eax + 8]
// 00432730  56                   push esi
// 00432731  83ec18               sub esp, 0x18
// 00432734  dd5c2410             fstp qword ptr [esp + 0x10]
// 00432738  8bf1                 mov esi, ecx
// 0043273a  d94004               fld dword ptr [eax + 4]
// 0043273d  dd5c2408             fstp qword ptr [esp + 8]
// 00432741  d900                 fld dword ptr [eax]
// 00432743  8d442420             lea eax, [esp + 0x20]
// 00432747  dd1c24               fstp qword ptr [esp]
// 0043274a  683c6a9a00           push 0x9a6a3c
// 0043274f  50                   push eax
// 00432750  ff15dcb79800         call dword ptr [0x98b7dc]
// 00432756  83c41c               add esp, 0x1c
// 00432759  8d54240c             lea edx, [esp + 0xc]
// 0043275d  8bcc                 mov ecx, esp
// 0043275f  89642408             mov dword ptr [esp + 8], esp
// 00432763  52                   push edx
// 00432764  ff15b8de9800         call dword ptr [0x98deb8]
// 0043276a  8b06                 mov eax, dword ptr [esi]
// 0043276c  8b5060               mov edx, dword ptr [eax + 0x60]
// 0043276f  8bce                 mov ecx, esi
// 00432771  ffd2                 call edx
// 00432773  5e                   pop esi
// 00432774  81c404010000         add esp, 0x104
// 0043277a  c20400               ret 4
// copied from an identical function in another client (function ?format@XItem@@QAEXPAUVVector3@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" __declspec(dllimport) int __cdecl sprintf(char*, const char*, ...);
struct VVector3 {float x,y,z;};
struct CString {void* data;__declspec(dllimport) CString(const char*);__declspec(dllimport) CString(const CString&);__declspec(dllimport) ~CString();};
struct XItem {virtual void unused00();virtual void unused01();virtual void unused02();virtual void unused03();virtual void unused04();virtual void unused05();virtual void unused06();virtual void unused07();virtual void unused08();virtual void unused09();virtual void unused10();virtual void unused11();virtual void unused12();virtual void unused13();virtual void unused14();virtual void unused15();virtual void unused16();virtual void unused17();virtual void unused18();virtual void unused19();virtual void unused20();virtual void unused21();virtual void unused22();virtual void unused23();virtual void setValue(CString);void format(VVector3*);};
void XItem::format(VVector3* v) {char buf[256];sprintf(buf,"%.3g, %.3g, %.3g",v->x,v->y,v->z);setValue(CString(buf));}