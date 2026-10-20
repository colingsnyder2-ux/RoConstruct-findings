// from server: 80% by colin
// from server: 78% by king_originala
// roc 2008-06 005a6d10  unit: RBX::Workspace  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6d10
//
// 005a6d10  81ec10010000         sub esp, 0x110
// 005a6d16  57                   push edi
// 005a6d17  8d442404             lea eax, [esp + 4]
// 005a6d1b  50                   push eax
// 005a6d1c  ff151c228000         call dword ptr [0x80221c]
// 005a6d22  80bc241801000000     cmp byte ptr [esp + 0x118], 0
// 005a6d2a  8b3d30288000         mov edi, dword ptr [0x802830]
// 005a6d30  742c                 je 0x5a6d5e
// 005a6d32  0fb74c2404           movzx ecx, word ptr [esp + 4]
// 005a6d37  0fb7542406           movzx edx, word ptr [esp + 6]
// 005a6d3c  0fb744240a           movzx eax, word ptr [esp + 0xa]
// 005a6d41  51                   push ecx
// 005a6d42  52                   push edx
// 005a6d43  50                   push eax
// 005a6d44  8d4c2420             lea ecx, [esp + 0x20]
// 005a6d48  6898418300           push 0x834198
// 005a6d4d  51                   push ecx
// 005a6d4e  ffd7                 call edi
// 005a6d50  8d542428             lea edx, [esp + 0x28]
// 005a6d54  52                   push edx
// 005a6d55  56                   push esi
// 005a6d56  e8f536eaff           call 0x44a450
// 005a6d5b  83c41c               add esp, 0x1c
// 005a6d5e  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 005a6d63  0fb74c2410           movzx ecx, word ptr [esp + 0x10]
// 005a6d68  0fb754240e           movzx edx, word ptr [esp + 0xe]
// 005a6d6d  50                   push eax
// 005a6d6e  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 005a6d73  51                   push ecx
// 005a6d74  52                   push edx
// 005a6d75  50                   push eax
// 005a6d76  8d4c2424             lea ecx, [esp + 0x24]
// 005a6d7a  6880418300           push 0x834180
// 005a6d7f  51                   push ecx
// 005a6d80  ffd7                 call edi
// 005a6d82  8d54242c             lea edx, [esp + 0x2c]
// 005a6d86  52                   push edx
// 005a6d87  56                   push esi
// 005a6d88  e8c336eaff           call 0x44a450
// 005a6d8d  83c420               add esp, 0x20
// 005a6d90  8bce                 mov ecx, esi
// 005a6d92  ff15bc238000         call dword ptr [0x8023bc]
// 005a6d98  5f                   pop edi
// 005a6d99  81c410010000         add esp, 0x110
// 005a6d9f  c3                   ret 

struct SystemTime {
    unsigned short year;
    unsigned short month;
    unsigned short dayOfWeek;
    unsigned short day;
    unsigned short hour;
    unsigned short minute;
    unsigned short second;
    unsigned short milliseconds;
};

extern "C" __declspec(dllimport) void __stdcall GetLocalTime(SystemTime*);
extern "C" int __cdecl sprintf(char*, const char*, ...);

struct Stream {
    Stream& flush();
};

extern Stream& __cdecl write(Stream&, const char*);

void __cdecl formatTime(Stream& stream, bool includeDate)
{
    SystemTime time;
    char buffer[256];

    GetLocalTime(&time);

    if (includeDate) {
        sprintf(buffer, "%02u.%02u.%u ",
                (unsigned int)time.day,
                (unsigned int)time.month,
                (unsigned int)time.year);
        write(stream, buffer);
    }

    sprintf(buffer, "%02u:%02u:%02u.%03u ",
            (unsigned int)time.hour,
            (unsigned int)time.minute,
            (unsigned int)time.second,
            (unsigned int)time.milliseconds);
    write(stream, buffer);
    stream.flush();
}
