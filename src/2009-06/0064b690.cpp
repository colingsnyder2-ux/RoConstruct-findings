// roc 2009-06 0064b690  unit: RBX::DataModel  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064b690
//
// 0064b690  83ec24               sub esp, 0x24
// 0064b693  8b1584e68900         mov edx, dword ptr [0x89e684]
// 0064b699  d902                 fld dword ptr [edx]
// 0064b69b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0064b69f  d819                 fcomp dword ptr [ecx]
// 0064b6a1  56                   push esi
// 0064b6a2  c744240400000000     mov dword ptr [esp + 4], 0
// 0064b6aa  dfe0                 fnstsw ax
// 0064b6ac  f6c444               test ah, 0x44
// 0064b6af  7a18                 jp 0x64b6c9
// 0064b6b1  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0064b6b5  6840f18d00           push 0x8df140
// 0064b6ba  8bce                 mov ecx, esi
// 0064b6bc  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b6c2  8bc6                 mov eax, esi
// 0064b6c4  5e                   pop esi
// 0064b6c5  83c424               add esp, 0x24
// 0064b6c8  c3                   ret 
// 0064b6c9  d902                 fld dword ptr [edx]
// 0064b6cb  d9e0                 fchs 
// 0064b6cd  d819                 fcomp dword ptr [ecx]
// 0064b6cf  dfe0                 fnstsw ax
// 0064b6d1  f6c444               test ah, 0x44
// 0064b6d4  7a18                 jp 0x64b6ee
// 0064b6d6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0064b6da  6838f18d00           push 0x8df138
// 0064b6df  8bce                 mov ecx, esi
// 0064b6e1  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b6e7  8bc6                 mov eax, esi
// 0064b6e9  5e                   pop esi
// 0064b6ea  83c424               add esp, 0x24
// 0064b6ed  c3                   ret 
// 0064b6ee  d9ee                 fldz 
// 0064b6f0  d811                 fcom dword ptr [ecx]
// 0064b6f2  dfe0                 fnstsw ax
// 0064b6f4  f6c441               test ah, 0x41
// 0064b6f7  7421                 je 0x64b71a
// 0064b6f9  d819                 fcomp dword ptr [ecx]
// 0064b6fb  dfe0                 fnstsw ax
// 0064b6fd  f6c441               test ah, 0x41
// 0064b700  7b1a                 jnp 0x64b71c
// 0064b702  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0064b706  6834f18d00           push 0x8df134
// 0064b70b  8bce                 mov ecx, esi
// 0064b70d  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b713  8bc6                 mov eax, esi
// 0064b715  5e                   pop esi
// 0064b716  83c424               add esp, 0x24
// 0064b719  c3                   ret 
// 0064b71a  ddd8                 fstp st(0)
// 0064b71c  d901                 fld dword ptr [ecx]
// 0064b71e  83ec08               sub esp, 8
// 0064b721  dd1c24               fstp qword ptr [esp]
// 0064b724  684cf18d00           push 0x8df14c
// 0064b729  8d442414             lea eax, [esp + 0x14]
// 0064b72d  6a20                 push 0x20
// 0064b72f  50                   push eax
// 0064b730  ff15e0e88900         call dword ptr [0x89e8e0]
// 0064b736  8b742440             mov esi, dword ptr [esp + 0x40]
// 0064b73a  83c414               add esp, 0x14
// 0064b73d  8d4c2408             lea ecx, [esp + 8]
// 0064b741  51                   push ecx
// 0064b742  8bce                 mov ecx, esi
// 0064b744  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b74a  8bc6                 mov eax, esi
// 0064b74c  5e                   pop esi
// 0064b74d  83c424               add esp, 0x24
// 0064b750  c3                   ret 
// copied from an identical function in another client (function ?formatFloat@@YAPAUString@@PAU1@ABM@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String;

extern float* infinityValue;
extern void (__thiscall *constructString)(String*, const char*);
extern int (__cdecl *formatString)(char*, unsigned int, const char*, ...);

#pragma float_control(precise, off, push)

String* __cdecl formatFloat(String* result, const float& value)
{
    volatile int state = 0;
    char buffer[32];

    if (value == *infinityValue)
    {
        constructString(result, "INF");
        return result;
    }

    if (-*infinityValue == value)
    {
        constructString(result, "-INF");
        return result;
    }

    if (!(value < 0.0f || value >= 0.0f))
    {
        constructString(result, "NAN");
        return result;
    }

    formatString(buffer, 32, "%.9g", value);
    constructString(result, buffer);
    return result;
}

#pragma float_control(pop)