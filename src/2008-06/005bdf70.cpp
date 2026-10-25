// from server: 100% by king_originala
// roc 2008-06 005bdf70  unit: RBX::Soundscape::SoundService  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bdf70
//
// 005bdf70  83ec44               sub esp, 0x44
// 005bdf73  8b15ac248000         mov edx, dword ptr [0x8024ac]
// 005bdf79  dd02                 fld qword ptr [edx]
// 005bdf7b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005bdf7f  dc19                 fcomp qword ptr [ecx]
// 005bdf81  56                   push esi
// 005bdf82  c744240400000000     mov dword ptr [esp + 4], 0
// 005bdf8a  dfe0                 fnstsw ax
// 005bdf8c  f6c444               test ah, 0x44
// 005bdf8f  7a18                 jp 0x5bdfa9
// 005bdf91  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 005bdf95  684c848300           push 0x83844c
// 005bdf9a  8bce                 mov ecx, esi
// 005bdf9c  ff1558248000         call dword ptr [0x802458]
// 005bdfa2  8bc6                 mov eax, esi
// 005bdfa4  5e                   pop esi
// 005bdfa5  83c444               add esp, 0x44
// 005bdfa8  c3                   ret 
// 005bdfa9  dd02                 fld qword ptr [edx]
// 005bdfab  d9e0                 fchs 
// 005bdfad  dc19                 fcomp qword ptr [ecx]
// 005bdfaf  dfe0                 fnstsw ax
// 005bdfb1  f6c444               test ah, 0x44
// 005bdfb4  7a18                 jp 0x5bdfce
// 005bdfb6  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 005bdfba  6844848300           push 0x838444
// 005bdfbf  8bce                 mov ecx, esi
// 005bdfc1  ff1558248000         call dword ptr [0x802458]
// 005bdfc7  8bc6                 mov eax, esi
// 005bdfc9  5e                   pop esi
// 005bdfca  83c444               add esp, 0x44
// 005bdfcd  c3                   ret 
// 005bdfce  d9ee                 fldz 
// 005bdfd0  dc11                 fcom qword ptr [ecx]
// 005bdfd2  dfe0                 fnstsw ax
// 005bdfd4  f6c441               test ah, 0x41
// 005bdfd7  7421                 je 0x5bdffa
// 005bdfd9  dc19                 fcomp qword ptr [ecx]
// 005bdfdb  dfe0                 fnstsw ax
// 005bdfdd  f6c441               test ah, 0x41
// 005bdfe0  7b1a                 jnp 0x5bdffc
// 005bdfe2  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 005bdfe6  6840848300           push 0x838440
// 005bdfeb  8bce                 mov ecx, esi
// 005bdfed  ff1558248000         call dword ptr [0x802458]
// 005bdff3  8bc6                 mov eax, esi
// 005bdff5  5e                   pop esi
// 005bdff6  83c444               add esp, 0x44
// 005bdff9  c3                   ret 
// 005bdffa  ddd8                 fstp st(0)
// 005bdffc  dd01                 fld qword ptr [ecx]
// 005bdffe  83ec08               sub esp, 8
// 005be001  dd1c24               fstp qword ptr [esp]
// 005be004  6838848300           push 0x838438
// 005be009  8d442414             lea eax, [esp + 0x14]
// 005be00d  6a40                 push 0x40
// 005be00f  50                   push eax
// 005be010  ff15b4278000         call dword ptr [0x8027b4]
// 005be016  8b742460             mov esi, dword ptr [esp + 0x60]
// 005be01a  83c414               add esp, 0x14
// 005be01d  8d4c2408             lea ecx, [esp + 8]
// 005be021  51                   push ecx
// 005be022  8bce                 mov ecx, esi
// 005be024  ff1558248000         call dword ptr [0x802458]
// 005be02a  8bc6                 mov eax, esi
// 005be02c  5e                   pop esi
// 005be02d  83c444               add esp, 0x44
// 005be030  c3                   ret 

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
