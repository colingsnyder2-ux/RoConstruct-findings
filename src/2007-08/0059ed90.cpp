// from server: 46% by colin
struct GuiDrawImage {
    void* data;
    GuiDrawImage();
    ~GuiDrawImage();
};

struct BackpackItem {
    char pad[0x158];
    void* textureId;
    void setTextureId(void* value);
};

void BackpackItem::setTextureId(void* value) {
    if (value != this->textureId) {
        this->textureId = value;
        if (this->textureId != 0) {
            GuiDrawImage temp;
            temp.data = this->textureId;
            temp.~GuiDrawImage();
        }
    }
}
