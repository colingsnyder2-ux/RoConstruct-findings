// from server: 86% by colin
// roc 2007-08 0046a6c0  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046a6c0

extern "C" {
    void* __stdcall string_assign(void* dest, const void* src);
}

struct LDraw2RobloxMapRoot {
    int field0;
    int field4;
    char field8[0x1c];
    char field24[0x1c];
};

LDraw2RobloxMapRoot* copy_backward_impl(LDraw2RobloxMapRoot* first, LDraw2RobloxMapRoot* last, LDraw2RobloxMapRoot* result)
{
    if (first != last) {
        do {
            last = (LDraw2RobloxMapRoot*)((char*)last - 0x40);
            result = (LDraw2RobloxMapRoot*)((char*)result - 0x40);
            result->field0 = last->field0;
            result->field4 = last->field4;
            string_assign(&result->field8, &last->field8);
            string_assign(&result->field24, &last->field24);
        } while (last != first);
    }
    return result;
}
