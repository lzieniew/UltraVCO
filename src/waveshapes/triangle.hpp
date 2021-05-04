constexpr float triangle_tab[512] = {  
    1.9961,
    3.9922,
    5.9883,
    7.9844,
    9.9805,
   11.9766,
   13.9727,
   15.9688,
   17.9648,
   19.9609,
   21.9570,
   23.9531,
   25.9492,
   27.9453,
   29.9414,
   31.9375,
   33.9336,
   35.9297,
   37.9258,
   39.9219,
   41.9180,
   43.9141,
   45.9102,
   47.9062,
   49.9023,
   51.8984,
   53.8945,
   55.8906,
   57.8867,
   59.8828,
   61.8789,
   63.8750,
   65.8711,
   67.8672,
   69.8633,
   71.8594,
   73.8555,
   75.8516,
   77.8477,
   79.8438,
   81.8398,
   83.8359,
   85.8320,
   87.8281,
   89.8242,
   91.8203,
   93.8164,
   95.8125,
   97.8086,
   99.8047,
  101.8008,
  103.7969,
  105.7930,
  107.7891,
  109.7852,
  111.7812,
  113.7773,
  115.7734,
  117.7695,
  119.7656,
  121.7617,
  123.7578,
  125.7539,
  127.7500,
  129.7461,
  131.7422,
  133.7383,
  135.7344,
  137.7305,
  139.7266,
  141.7227,
  143.7188,
  145.7148,
  147.7109,
  149.7070,
  151.7031,
  153.6992,
  155.6953,
  157.6914,
  159.6875,
  161.6836,
  163.6797,
  165.6758,
  167.6719,
  169.6680,
  171.6641,
  173.6602,
  175.6562,
  177.6523,
  179.6484,
  181.6445,
  183.6406,
  185.6367,
  187.6328,
  189.6289,
  191.6250,
  193.6211,
  195.6172,
  197.6133,
  199.6094,
  201.6055,
  203.6016,
  205.5977,
  207.5938,
  209.5898,
  211.5859,
  213.5820,
  215.5781,
  217.5742,
  219.5703,
  221.5664,
  223.5625,
  225.5586,
  227.5547,
  229.5508,
  231.5469,
  233.5430,
  235.5391,
  237.5352,
  239.5312,
  241.5273,
  243.5234,
  245.5195,
  247.5156,
  249.5117,
  251.5078,
  253.5039,
  255.5000,
  257.4961,
  259.4922,
  261.4883,
  263.4844,
  265.4805,
  267.4766,
  269.4727,
  271.4688,
  273.4648,
  275.4609,
  277.4570,
  279.4531,
  281.4492,
  283.4453,
  285.4414,
  287.4375,
  289.4336,
  291.4297,
  293.4258,
  295.4219,
  297.4180,
  299.4141,
  301.4102,
  303.4062,
  305.4023,
  307.3984,
  309.3945,
  311.3906,
  313.3867,
  315.3828,
  317.3789,
  319.3750,
  321.3711,
  323.3672,
  325.3633,
  327.3594,
  329.3555,
  331.3516,
  333.3477,
  335.3438,
  337.3398,
  339.3359,
  341.3320,
  343.3281,
  345.3242,
  347.3203,
  349.3164,
  351.3125,
  353.3086,
  355.3047,
  357.3008,
  359.2969,
  361.2930,
  363.2891,
  365.2852,
  367.2812,
  369.2773,
  371.2734,
  373.2695,
  375.2656,
  377.2617,
  379.2578,
  381.2539,
  383.2500,
  385.2461,
  387.2422,
  389.2383,
  391.2344,
  393.2305,
  395.2266,
  397.2227,
  399.2188,
  401.2148,
  403.2109,
  405.2070,
  407.2031,
  409.1992,
  411.1953,
  413.1914,
  415.1875,
  417.1836,
  419.1797,
  421.1758,
  423.1719,
  425.1680,
  427.1641,
  429.1602,
  431.1562,
  433.1523,
  435.1484,
  437.1445,
  439.1406,
  441.1367,
  443.1328,
  445.1289,
  447.1250,
  449.1211,
  451.1172,
  453.1133,
  455.1094,
  457.1055,
  459.1016,
  461.0977,
  463.0938,
  465.0898,
  467.0859,
  469.0820,
  471.0781,
  473.0742,
  475.0703,
  477.0664,
  479.0625,
  481.0586,
  483.0547,
  485.0508,
  487.0469,
  489.0430,
  491.0391,
  493.0352,
  495.0312,
  497.0273,
  499.0234,
  501.0195,
  503.0156,
  505.0117,
  507.0078,
  509.0039,
  511.0000,
  509.0039,
  507.0078,
  505.0117,
  503.0156,
  501.0195,
  499.0234,
  497.0273,
  495.0312,
  493.0352,
  491.0391,
  489.0430,
  487.0469,
  485.0508,
  483.0547,
  481.0586,
  479.0625,
  477.0664,
  475.0703,
  473.0742,
  471.0781,
  469.0820,
  467.0859,
  465.0898,
  463.0938,
  461.0977,
  459.1016,
  457.1055,
  455.1094,
  453.1133,
  451.1172,
  449.1211,
  447.1250,
  445.1289,
  443.1328,
  441.1367,
  439.1406,
  437.1445,
  435.1484,
  433.1523,
  431.1562,
  429.1602,
  427.1641,
  425.1680,
  423.1719,
  421.1758,
  419.1797,
  417.1836,
  415.1875,
  413.1914,
  411.1953,
  409.1992,
  407.2031,
  405.2070,
  403.2109,
  401.2148,
  399.2188,
  397.2227,
  395.2266,
  393.2305,
  391.2344,
  389.2383,
  387.2422,
  385.2461,
  383.2500,
  381.2539,
  379.2578,
  377.2617,
  375.2656,
  373.2695,
  371.2734,
  369.2773,
  367.2812,
  365.2852,
  363.2891,
  361.2930,
  359.2969,
  357.3008,
  355.3047,
  353.3086,
  351.3125,
  349.3164,
  347.3203,
  345.3242,
  343.3281,
  341.3320,
  339.3359,
  337.3398,
  335.3438,
  333.3477,
  331.3516,
  329.3555,
  327.3594,
  325.3633,
  323.3672,
  321.3711,
  319.3750,
  317.3789,
  315.3828,
  313.3867,
  311.3906,
  309.3945,
  307.3984,
  305.4023,
  303.4062,
  301.4102,
  299.4141,
  297.4180,
  295.4219,
  293.4258,
  291.4297,
  289.4336,
  287.4375,
  285.4414,
  283.4453,
  281.4492,
  279.4531,
  277.4570,
  275.4609,
  273.4648,
  271.4688,
  269.4727,
  267.4766,
  265.4805,
  263.4844,
  261.4883,
  259.4922,
  257.4961,
  255.5000,
  253.5039,
  251.5078,
  249.5117,
  247.5156,
  245.5195,
  243.5234,
  241.5273,
  239.5312,
  237.5352,
  235.5391,
  233.5430,
  231.5469,
  229.5508,
  227.5547,
  225.5586,
  223.5625,
  221.5664,
  219.5703,
  217.5742,
  215.5781,
  213.5820,
  211.5859,
  209.5898,
  207.5938,
  205.5977,
  203.6016,
  201.6055,
  199.6094,
  197.6133,
  195.6172,
  193.6211,
  191.6250,
  189.6289,
  187.6328,
  185.6367,
  183.6406,
  181.6445,
  179.6484,
  177.6523,
  175.6562,
  173.6602,
  171.6641,
  169.6680,
  167.6719,
  165.6758,
  163.6797,
  161.6836,
  159.6875,
  157.6914,
  155.6953,
  153.6992,
  151.7031,
  149.7070,
  147.7109,
  145.7148,
  143.7188,
  141.7227,
  139.7266,
  137.7305,
  135.7344,
  133.7383,
  131.7422,
  129.7461,
  127.7500,
  125.7539,
  123.7578,
  121.7617,
  119.7656,
  117.7695,
  115.7734,
  113.7773,
  111.7812,
  109.7852,
  107.7891,
  105.7930,
  103.7969,
  101.8008,
   99.8047,
   97.8086,
   95.8125,
   93.8164,
   91.8203,
   89.8242,
   87.8281,
   85.8320,
   83.8359,
   81.8398,
   79.8438,
   77.8477,
   75.8516,
   73.8555,
   71.8594,
   69.8633,
   67.8672,
   65.8711,
   63.8750,
   61.8789,
   59.8828,
   57.8867,
   55.8906,
   53.8945,
   51.8984,
   49.9023,
   47.9062,
   45.9102,
   43.9141,
   41.9180,
   39.9219,
   37.9258,
   35.9297,
   33.9336,
   31.9375,
   29.9414,
   27.9453,
   25.9492,
   23.9531,
   21.9570,
   19.9609,
   17.9648,
   15.9688,
   13.9727,
   11.9766,
    9.9805,
    7.9844,
    5.9883,
    3.9922,
    1.9961,
    0.0000
};