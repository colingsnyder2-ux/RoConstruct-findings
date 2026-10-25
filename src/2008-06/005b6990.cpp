// from server: 100% by colin
// roc 2008-06 005b6990  unit: RBX::DropperTool  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6990
//
// 005b6990  51                   push ecx
// 005b6991  8b813c010000         mov eax, dword ptr [ecx + 0x13c]
// 005b6997  85c0                 test eax, eax
// 005b6999  7504                 jne 0x5b699f
// 005b699b  32c0                 xor al, al
// 005b699d  59                   pop ecx
// 005b699e  c3                   ret 
// 005b699f  8d4c2403             lea ecx, [esp + 3]
// 005b69a3  51                   push ecx
// 005b69a4  50                   push eax
// 005b69a5  e838920e00           call 0x69fbe2
// 005b69aa  83e824               sub eax, 0x24
// 005b69ad  f7d8                 neg eax
// 005b69af  1ac0                 sbb al, al
// 005b69b1  22442403             and al, byte ptr [esp + 3]
// 005b69b5  59                   pop ecx
// 005b69b6  c3                   ret 

struct FMOD_Channel;

extern "C" int __stdcall FMOD_Channel_isPlaying(FMOD_Channel *channel, bool *playing);

struct DropperTool {
    char padding[0x13c];
    FMOD_Channel *channel;
    bool isPlaying();
};

bool DropperTool::isPlaying()
{
    if (!channel)
        return false;

    bool playing;
    if (FMOD_Channel_isPlaying(channel, &playing) == 0x24)
        return false;
    return playing;
}
