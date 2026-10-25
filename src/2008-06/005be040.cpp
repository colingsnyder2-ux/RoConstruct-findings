// from server: 100% by king_originala
// roc 2008-06 005be040  unit: RBX::Soundscape::SoundService  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005be040
//
// 005be040  83ec24               sub esp, 0x24
// 005be043  8b150c258000         mov edx, dword ptr [0x80250c]
// 005be049  d902                 fld dword ptr [edx]
// 005be04b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005be04f  d819                 fcomp dword ptr [ecx]
// 005be051  56                   push esi
// 005be052  c744240400000000     mov dword ptr [esp + 4], 0
// 005be05a  dfe0                 fnstsw ax
// 005be05c  f6c444               test ah, 0x44
// 005be05f  7a18                 jp 0x5be079
// 005be061  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005be065  684c848300           push 0x83844c
// 005be06a  8bce                 mov ecx, esi
// 005be06c  ff1558248000         call dword ptr [0x802458]
// 005be072  8bc6                 mov eax, esi
// 005be074  5e                   pop esi
// 005be075  83c424               add esp, 0x24
// 005be078  c3                   ret 
// 005be079  d902                 fld dword ptr [edx]
// 005be07b  d9e0                 fchs 
// 005be07d  d819                 fcomp dword ptr [ecx]
// 005be07f  dfe0                 fnstsw ax
// 005be081  f6c444               test ah, 0x44
// 005be084  7a18                 jp 0x5be09e
// 005be086  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005be08a  6844848300           push 0x838444
// 005be08f  8bce                 mov ecx, esi
// 005be091  ff1558248000         call dword ptr [0x802458]
// 005be097  8bc6                 mov eax, esi
// 005be099  5e                   pop esi
// 005be09a  83c424               add esp, 0x24
// 005be09d  c3                   ret 
// 005be09e  d9ee                 fldz 
// 005be0a0  d811                 fcom dword ptr [ecx]
// 005be0a2  dfe0                 fnstsw ax
// 005be0a4  f6c441               test ah, 0x41
// 005be0a7  7421                 je 0x5be0ca
// 005be0a9  d819                 fcomp dword ptr [ecx]
// 005be0ab  dfe0                 fnstsw ax
// 005be0ad  f6c441               test ah, 0x41
// 005be0b0  7b1a                 jnp 0x5be0cc
// 005be0b2  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005be0b6  6840848300           push 0x838440
// 005be0bb  8bce                 mov ecx, esi
// 005be0bd  ff1558248000         call dword ptr [0x802458]
// 005be0c3  8bc6                 mov eax, esi
// 005be0c5  5e                   pop esi
// 005be0c6  83c424               add esp, 0x24
// 005be0c9  c3                   ret 
// 005be0ca  ddd8                 fstp st(0)
// 005be0cc  d901                 fld dword ptr [ecx]
// 005be0ce  83ec08               sub esp, 8
// 005be0d1  dd1c24               fstp qword ptr [esp]
// 005be0d4  6850848300           push 0x838450
// 005be0d9  8d442414             lea eax, [esp + 0x14]
// 005be0dd  6a20                 push 0x20
// 005be0df  50                   push eax
// 005be0e0  ff15b4278000         call dword ptr [0x8027b4]
// 005be0e6  8b742440             mov esi, dword ptr [esp + 0x40]
// 005be0ea  83c414               add esp, 0x14
// 005be0ed  8d4c2408             lea ecx, [esp + 8]
// 005be0f1  51                   push ecx
// 005be0f2  8bce                 mov ecx, esi
// 005be0f4  ff1558248000         call dword ptr [0x802458]
// 005be0fa  8bc6                 mov eax, esi
// 005be0fc  5e                   pop esi
// 005be0fd  83c424               add esp, 0x24
// 005be100  c3                   ret 

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
