// roc 2009-06 0064b510  unit: RBX::DataModel  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064b510
//
// 0064b510  83ec44               sub esp, 0x44
// 0064b513  8b1544e58900         mov edx, dword ptr [0x89e544]
// 0064b519  dd02                 fld qword ptr [edx]
// 0064b51b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0064b51f  dc19                 fcomp qword ptr [ecx]
// 0064b521  56                   push esi
// 0064b522  c744240400000000     mov dword ptr [esp + 4], 0
// 0064b52a  dfe0                 fnstsw ax
// 0064b52c  f6c444               test ah, 0x44
// 0064b52f  7a18                 jp 0x64b549
// 0064b531  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0064b535  6840f18d00           push 0x8df140
// 0064b53a  8bce                 mov ecx, esi
// 0064b53c  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b542  8bc6                 mov eax, esi
// 0064b544  5e                   pop esi
// 0064b545  83c444               add esp, 0x44
// 0064b548  c3                   ret 
// 0064b549  dd02                 fld qword ptr [edx]
// 0064b54b  d9e0                 fchs 
// 0064b54d  dc19                 fcomp qword ptr [ecx]
// 0064b54f  dfe0                 fnstsw ax
// 0064b551  f6c444               test ah, 0x44
// 0064b554  7a18                 jp 0x64b56e
// 0064b556  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0064b55a  6838f18d00           push 0x8df138
// 0064b55f  8bce                 mov ecx, esi
// 0064b561  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b567  8bc6                 mov eax, esi
// 0064b569  5e                   pop esi
// 0064b56a  83c444               add esp, 0x44
// 0064b56d  c3                   ret 
// 0064b56e  d9ee                 fldz 
// 0064b570  dc11                 fcom qword ptr [ecx]
// 0064b572  dfe0                 fnstsw ax
// 0064b574  f6c441               test ah, 0x41
// 0064b577  7421                 je 0x64b59a
// 0064b579  dc19                 fcomp qword ptr [ecx]
// 0064b57b  dfe0                 fnstsw ax
// 0064b57d  f6c441               test ah, 0x41
// 0064b580  7b1a                 jnp 0x64b59c
// 0064b582  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0064b586  6834f18d00           push 0x8df134
// 0064b58b  8bce                 mov ecx, esi
// 0064b58d  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b593  8bc6                 mov eax, esi
// 0064b595  5e                   pop esi
// 0064b596  83c444               add esp, 0x44
// 0064b599  c3                   ret 
// 0064b59a  ddd8                 fstp st(0)
// 0064b59c  dd01                 fld qword ptr [ecx]
// 0064b59e  83ec08               sub esp, 8
// 0064b5a1  dd1c24               fstp qword ptr [esp]
// 0064b5a4  6844f18d00           push 0x8df144
// 0064b5a9  8d442414             lea eax, [esp + 0x14]
// 0064b5ad  6a40                 push 0x40
// 0064b5af  50                   push eax
// 0064b5b0  ff15e0e88900         call dword ptr [0x89e8e0]
// 0064b5b6  8b742460             mov esi, dword ptr [esp + 0x60]
// 0064b5ba  83c414               add esp, 0x14
// 0064b5bd  8d4c2408             lea ecx, [esp + 8]
// 0064b5c1  51                   push ecx
// 0064b5c2  8bce                 mov ecx, esi
// 0064b5c4  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b5ca  8bc6                 mov eax, esi
// 0064b5cc  5e                   pop esi
// 0064b5cd  83c444               add esp, 0x44
// 0064b5d0  c3                   ret 
// copied from an identical function in another client (function ?convertNumber@@YAPAUString@@PAU1@ABN@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String;

extern const double* infinity;
extern String* (__thiscall *constructString)(String*, const char*);
extern int (__cdecl *formatString)(char*, unsigned int, const char*, ...);

extern const char positiveInfinityText[];
extern const char negativeInfinityText[];
extern const char nanText[];
extern const char numberFormat[];

String* __cdecl convertNumber(String* result, const double& value)
{
    char buffer[64];
    volatile int state = 0;

    if (value == *infinity)
    {
        constructString(result, positiveInfinityText);
        return result;
    }

    if (value == -*infinity)
    {
        constructString(result, negativeInfinityText);
        return result;
    }

    if (!(value < 0.0 || value >= 0.0))
    {
        constructString(result, nanText);
        return result;
    }

    formatString(buffer, 64, numberFormat, value);
    constructString(result, buffer);
    return result;
}