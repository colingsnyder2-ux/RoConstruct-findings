// roc 2009-06 00431510  unit: G3D::VVector3::?$XItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00431510
//
// 00431510  81ec04010000         sub esp, 0x104
// 00431516  8b842408010000       mov eax, dword ptr [esp + 0x108]
// 0043151d  d94008               fld dword ptr [eax + 8]
// 00431520  56                   push esi
// 00431521  83ec18               sub esp, 0x18
// 00431524  dd5c2410             fstp qword ptr [esp + 0x10]
// 00431528  8bf1                 mov esi, ecx
// 0043152a  d94004               fld dword ptr [eax + 4]
// 0043152d  dd5c2408             fstp qword ptr [esp + 8]
// 00431531  d900                 fld dword ptr [eax]
// 00431533  8d442420             lea eax, [esp + 0x20]
// 00431537  dd1c24               fstp qword ptr [esp]
// 0043153a  68cc3c8b00           push 0x8b3ccc
// 0043153f  50                   push eax
// 00431540  ff1538e98900         call dword ptr [0x89e938]
// 00431546  83c41c               add esp, 0x1c
// 00431549  8d54240c             lea edx, [esp + 0xc]
// 0043154d  8bcc                 mov ecx, esp
// 0043154f  89642408             mov dword ptr [esp + 8], esp
// 00431553  52                   push edx
// 00431554  ff1508fd8900         call dword ptr [0x89fd08]
// 0043155a  8b06                 mov eax, dword ptr [esi]
// 0043155c  8b5060               mov edx, dword ptr [eax + 0x60]
// 0043155f  8bce                 mov ecx, esi
// 00431561  ffd2                 call edx
// 00431563  5e                   pop esi
// 00431564  81c404010000         add esp, 0x104
// 0043156a  c20400               ret 4
// copied from an identical function in another client (function ?format@XItem@@QAEXPAUVVector3@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" __declspec(dllimport) int __cdecl sprintf(char*, const char*, ...);
struct VVector3 {float x,y,z;};
struct CString {void* data;__declspec(dllimport) CString(const char*);__declspec(dllimport) CString(const CString&);__declspec(dllimport) ~CString();};
struct XItem {virtual void unused00();virtual void unused01();virtual void unused02();virtual void unused03();virtual void unused04();virtual void unused05();virtual void unused06();virtual void unused07();virtual void unused08();virtual void unused09();virtual void unused10();virtual void unused11();virtual void unused12();virtual void unused13();virtual void unused14();virtual void unused15();virtual void unused16();virtual void unused17();virtual void unused18();virtual void unused19();virtual void unused20();virtual void unused21();virtual void unused22();virtual void unused23();virtual void setValue(CString);void format(VVector3*);};
void XItem::format(VVector3* v) {char buf[256];sprintf(buf,"%.3g, %.3g, %.3g",v->x,v->y,v->z);setValue(CString(buf));}