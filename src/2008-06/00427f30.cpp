// from server: 100% by king_originala
// roc 2008-06 00427f30  unit: MainLogManager  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427f30
//
// 00427f30  6aff                 push -1
// 00427f32  68fbf07b00           push 0x7bf0fb
// 00427f37  64a100000000         mov eax, dword ptr fs:[0]
// 00427f3d  50                   push eax
// 00427f3e  64892500000000       mov dword ptr fs:[0], esp
// 00427f45  83ec24               sub esp, 0x24
// 00427f48  56                   push esi
// 00427f49  57                   push edi
// 00427f4a  8d442408             lea eax, [esp + 8]
// 00427f4e  50                   push eax
// 00427f4f  8bf1                 mov esi, ecx
// 00427f51  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00427f59  e842fcffff           call 0x427ba0
// 00427f5e  68d0038100           push 0x8103d0
// 00427f63  8d4c2414             lea ecx, [esp + 0x14]
// 00427f67  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00427f6f  ff1558248000         call dword ptr [0x802458]
// 00427f75  83c62c               add esi, 0x2c
// 00427f78  56                   push esi
// 00427f79  8d4c2414             lea ecx, [esp + 0x14]
// 00427f7d  c644243802           mov byte ptr [esp + 0x38], 2
// 00427f82  ff1550248000         call dword ptr [0x802450]
// 00427f88  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 00427f8e  8b11                 mov edx, dword ptr [ecx]
// 00427f90  52                   push edx
// 00427f91  6a0c                 push 0xc
// 00427f93  8d4c2418             lea ecx, [esp + 0x18]
// 00427f97  ff15ec238000         call dword ptr [0x8023ec]
// 00427f9d  6a03                 push 3
// 00427f9f  6a04                 push 4
// 00427fa1  8d4c2418             lea ecx, [esp + 0x18]
// 00427fa5  ff15ec238000         call dword ptr [0x8023ec]
// 00427fab  68c8038100           push 0x8103c8
// 00427fb0  8d4c2414             lea ecx, [esp + 0x14]
// 00427fb4  ff1548248000         call dword ptr [0x802448]
// 00427fba  8d4c2410             lea ecx, [esp + 0x10]
// 00427fbe  ff1564248000         call dword ptr [0x802464]
// 00427fc4  8bf0                 mov esi, eax
// 00427fc6  56                   push esi
// 00427fc7  ff15e42f8000         call dword ptr [0x802fe4]
// 00427fcd  83c404               add esp, 4
// 00427fd0  8d4c2408             lea ecx, [esp + 8]
// 00427fd4  8bf8                 mov edi, eax
// 00427fd6  ff15e02f8000         call dword ptr [0x802fe0]
// 00427fdc  8d440701             lea eax, [edi + eax + 1]
// 00427fe0  50                   push eax
// 00427fe1  8d4c240c             lea ecx, [esp + 0xc]
// 00427fe5  ff1584338000         call dword ptr [0x803384]
// 00427feb  56                   push esi
// 00427fec  50                   push eax
// 00427fed  ff15182b8000         call dword ptr [0x802b18]
// 00427ff3  6aff                 push -1
// 00427ff5  8d4c240c             lea ecx, [esp + 0xc]
// 00427ff9  ff1580338000         call dword ptr [0x803380]
// 00427fff  8d4c2408             lea ecx, [esp + 8]
// 00428003  ff15e03e8000         call dword ptr [0x803ee0]
// 00428009  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0042800d  50                   push eax
// 0042800e  8bce                 mov ecx, esi
// 00428010  ff1558248000         call dword ptr [0x802458]
// 00428016  8d4c2410             lea ecx, [esp + 0x10]
// 0042801a  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00428022  c644243401           mov byte ptr [esp + 0x34], 1
// 00428027  ff1568248000         call dword ptr [0x802468]
// 0042802d  8d4c2408             lea ecx, [esp + 8]
// 00428031  ff15143f8000         call dword ptr [0x803f14]
// 00428037  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0042803b  5f                   pop edi
// 0042803c  8bc6                 mov eax, esi
// 0042803e  5e                   pop esi
// 0042803f  64890d00000000       mov dword ptr fs:[0], ecx
// 00428046  83c430               add esp, 0x30
// 00428049  c20400               ret 4

// from server: 99% by Espeon
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <string>
typedef std::string String;
struct ImportedString:std::string {
 ImportedString(const char* s):std::string(s){}
 __declspec(dllimport) const char* c_str()const;
};
struct BufferString {
 char* data;
 __declspec(dllimport) ~BufferString() throw();
 __declspec(dllimport) int length()const;
 __declspec(dllimport) char* buffer(int);
 __declspec(dllimport) void release(int);
 __declspec(dllimport) const char* text()const;
 __declspec(dllimport) static unsigned __cdecl stringLength(const char*);
};
extern "C" __declspec(dllimport) int __stdcall PathAppendA(char*,const char*);
struct MainLogManager {
 char padding[0x2c];
 String name;
 BufferString getPath();
 String fileName();
};
String MainLogManager::fileName(){
 BufferString path=getPath();
 ImportedString tail("log_");
 tail+=name;
 tail.erase(12,String::npos);
 tail.erase(4,3);
 tail+=".txt";
 const char* text=tail.c_str();
 char* p=path.buffer(BufferString::stringLength(text)+path.length()+1);
 PathAppendA(p,text);
 path.release(-1);
 return String(path.text());
}
