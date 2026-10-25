// from server: 100% by colin
// roc 2008-06 00441360  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00441360
//
// 00441360  6aff                 push -1
// 00441362  6899037c00           push 0x7c0399
// 00441367  64a100000000         mov eax, dword ptr fs:[0]
// 0044136d  50                   push eax
// 0044136e  64892500000000       mov dword ptr fs:[0], esp
// 00441375  83ec08               sub esp, 8
// 00441378  56                   push esi
// 00441379  8bf1                 mov esi, ecx
// 0044137b  51                   push ecx
// 0044137c  8d442420             lea eax, [esp + 0x20]
// 00441380  8bcc                 mov ecx, esp
// 00441382  8964240c             mov dword ptr [esp + 0xc], esp
// 00441386  50                   push eax
// 00441387  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0044138f  ff15d43e8000         call dword ptr [0x803ed4]
// 00441395  8bce                 mov ecx, esi
// 00441397  e824072d00           call 0x711ac0
// 0044139c  8b16                 mov edx, dword ptr [esi]
// 0044139e  8b82f0000000         mov eax, dword ptr [edx + 0xf0]
// 004413a4  8bce                 mov ecx, esi
// 004413a6  ffd0                 call eax
// 004413a8  8d4c2407             lea ecx, [esp + 7]
// 004413ac  51                   push ecx
// 004413ad  8bce                 mov ecx, esi
// 004413af  8844240b             mov byte ptr [esp + 0xb], al
// 004413b3  e818d7ffff           call 0x43ead0
// 004413b8  8d4c241c             lea ecx, [esp + 0x1c]
// 004413bc  ff15143f8000         call dword ptr [0x803f14]
// 004413c2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004413c6  64890d00000000       mov dword ptr fs:[0], ecx
// 004413cd  5e                   pop esi
// 004413ce  83c414               add esp, 0x14
// 004413d1  c20400               ret 4

struct String;


struct String
{
    void* data;

    __declspec(dllimport) String(const String&);
    __declspec(dllimport) ~String() throw();
};





struct S
{
    typedef bool (__thiscall *Query)(S*);
    Query* vtable;

    void f(String value);
    void set(String value);
    void update(const bool& value);
};

void S::f(String value)
{
    set(value);
    bool result = vtable[60](this);
    update(result);
}
