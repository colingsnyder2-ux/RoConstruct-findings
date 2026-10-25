// from server: 100% by king_originala
// roc 2008-06 0054ab10  unit: RBX::RenderBase::Mesh  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054ab10
//
// 0054ab10  55                   push ebp
// 0054ab11  8bec                 mov ebp, esp
// 0054ab13  51                   push ecx
// 0054ab14  894dfc               mov dword ptr [ebp - 4], ecx
// 0054ab17  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054ab1a  ff15b04c8000         call dword ptr [0x804cb0]
// 0054ab20  8b4508               mov eax, dword ptr [ebp + 8]
// 0054ab23  83e001               and eax, 1
// 0054ab26  740c                 je 0x54ab34
// 0054ab28  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054ab2b  51                   push ecx
// 0054ab2c  e8495b1500           call 0x6a067a
// 0054ab31  83c404               add esp, 4
// 0054ab34  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054ab37  8be5                 mov esp, ebp
// 0054ab39  5d                   pop ebp
// 0054ab3a  c20400               ret 4

typedef void (__thiscall *DestructorCall)(void *);
extern DestructorCall destroyIndexData;

void __cdecl operator delete(void *);

struct Mesh
{
    Mesh *__thiscall destroy(unsigned int flags);
};

#pragma optimize("", off)
Mesh *__thiscall Mesh::destroy(unsigned int flags)
{
    destroyIndexData(this);
    if (flags & 1)
        operator delete(this);
    return this;
}
#pragma optimize("", on)
