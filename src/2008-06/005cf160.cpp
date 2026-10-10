// from server: 42% by atomic.potato
extern "C" void BasicStringCopy(void* destination, void* source);

struct DxUserInput
{
    char padding[0x180];
    void* text;
    void* CopyText(void* other);
};

void* DxUserInput::CopyText(void* other)
{
    BasicStringCopy(other, text);
    return other;
}
