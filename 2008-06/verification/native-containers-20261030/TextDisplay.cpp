
// TextDisplay bodies restored from native 2008 code using declared SDK fields.
namespace RBX {
void TextDisplay::init() {
    setGuiSize(G3D::Vector2(180.0f,30.0f));
    fontSize=18;
    fontColor=G3D::Color4(G3D::Color3::purple(),1.0f);
    borderColor=G3D::Color4::clear();
    align=Adorn::XALIGN_CENTER;
}
TextDisplay::TextDisplay(const std::string& name,const std::string& text) {
    init();
    setName(name);
    label=text;
}
int TextDisplay::getFontSize() const { return fontSize; }
std::string TextDisplay::getLabel() const { return label; }
void TextDisplay::render2d(Adorn* adorn) {
    label2d(adorn,getLabel(),fontColor,borderColor,align);
}
}
