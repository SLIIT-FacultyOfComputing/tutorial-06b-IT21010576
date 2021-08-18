class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setLength(int plength);
       void setHeight(int pheight);
       void setWidth(int pwidth);
       int getLength();
       int getHeight();
       int getWidth();
       int calcVolume();
};
