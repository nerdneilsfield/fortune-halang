#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

vector<string> haSaying {
    "FuckQ",
    "Give you color see see?",
    "Xi Baozi is dog",
    "一个城市的交响乐水平标志着这个城市的文明程度。",
    "我也祝你们大家春节愉快、阖家欢乐、万事如意。",
    "哎呀，马儿马儿你快快跑。",
    "我回忆起我曾经在1945年、46年的大学年代，经常我们喜欢玩儿“Hawaii guitar”，经常弹奏的《Aloha 'Oe》这个歌曲。",
    "在我祝酒之前，我去弹一曲《Aloha 'Oe》这个 Guitar，请州长夫人演唱！",
    "隐患险于明火，防范胜于救灾，责任重于泰山。",
    "把上海市青少年业余无线电通讯活动开展好。",
    "讲话，上海人讲“吃相难看”，就是说话“吃相难看。",
    "由于您的到来，上海的天气好转了。",
	"世界语我知道，很好。我叔叔也曾经学习过世界语。",
    "学习外语，贵在坚持。学习和掌握一门外语不容易，需要付出艰苦努力。",
    "不来这个海南名山遗憾了，这么好的风景名胜海南要大力宣传，北京也要大力宣传，我回北京也为你们宣传宣传，以后这山就人山人海了。",
    "Я помню чудное мгновенье…（我还记得那些精彩的瞬间...）",
    "Великий поэт, национальная гордость!（伟大的诗人，国家的骄傲！）",
    "我，衷心地祝愿，明年这一个鸡年，能够风调雨顺，能够，我们的国家，走向繁荣昌盛，使得我们全体的人民，能够生活幸福。谢谢！",

    "I think this young man maybe not killed by the tank.",
    "I'm sorry. I am an electrical power engineer. ",
    "没听到这个事。",
    "支持不支持，我是支持的。我就明确地给你告诉这一点。",
    "你们有一个好，全世界跑到什么地方，你们比其他的西方记者啊，跑得还快。但是呢，问来问去的问题啊，都 too simple（太肤浅），啊，sometimes naïve!（有时很幼稚！）懂了没啊？",
    "识得唔识得啊？",
    "你们啊，不要想……喜欢……弄个大新闻，说现在已经钦定了，再把我批判一番。",
    "你们啊，naïve!（幼稚！）",
    "I'm angry!（我生气了！）我跟你讲啊，你们这样子啊，是不行的！",
    "我今天算得罪了你们一下！",
    "One day when we were young.",
    "哎呀，马儿马儿你快快跑。",
    "在我祝酒之前，我去弹一曲《Aloha 'Oe》这个 Guitar，请州长夫人演唱！"
};


int main(){
	int length = haSaying.size();

    mt19937 rng;
    rng.seed(random_device()());
    uniform_int_distribution<std::mt19937::result_type> dist6(0,length-1);
    
    cout<< haSaying[dist6(rng)]<<endl;
    return 0;
}
