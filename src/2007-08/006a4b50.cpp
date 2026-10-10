// from server: 26% by colin
extern "C" int __stdcall GetKeyboardLayoutList(int, void*);
extern "C" int __stdcall GetKeyboardState(void*);
extern "C" int __stdcall MapVirtualKeyA(unsigned int, unsigned int);
extern "C" int __stdcall ToAsciiEx(unsigned int, unsigned int, const void*, unsigned short*, unsigned int, void*);

extern "C" void __cdecl sub_00630a1e();
extern "C" void* __cdecl sub_00630bb0(unsigned int);
extern "C" unsigned char __cdecl sub_006a4410(unsigned int);

struct CXTPShortcutManagerCKeyHelper {
    bool IsKeyPressed(unsigned int vk, unsigned char ch);
};

bool CXTPShortcutManagerCKeyHelper::IsKeyPressed(unsigned int vk, unsigned char ch)
{
    unsigned char state[256];
    unsigned short out[2];
    unsigned int layout;
    unsigned int i;
    unsigned int count;
    unsigned int* list;
    unsigned char mapped;
    unsigned char saved;

    if (!GetKeyboardState(state))
        return false;

    mapped = sub_006a4410(vk);
    if ((unsigned char)vk == ch)
        return true;
    if (mapped == ch)
        return true;

    count = GetKeyboardLayoutList(0, 0);
    if (count <= 1)
        return false;

    list = (unsigned int*)sub_00630bb0(count * 4);
    GetKeyboardLayoutList(count, list);

    layout = 0;
    if (!MapVirtualKeyA(vk, 2))
        return false;

    for (i = 0; i < count; ++i) {
        unsigned int result;
        unsigned int scancode = list[i];
        unsigned short outChar = 0;

        result = ToAsciiEx(vk, scancode, state, &outChar, 0, (void*)layout);
        if (result == 1) {
            if ((unsigned char)vk == (unsigned char)outChar)
                return true;
            if (mapped == sub_006a4410(outChar))
                return true;
        }

        saved = state[0x18];
        state[0x18] = 0x81;
        outChar = 0;
        result = ToAsciiEx(vk, scancode, state, &outChar, 0, (void*)layout);
        state[0x18] = saved;
        if (result == 1) {
            if ((unsigned char)vk == (unsigned char)outChar)
                return true;
            if (mapped == sub_006a4410(outChar))
                return true;
        }
    }

    return false;
}
