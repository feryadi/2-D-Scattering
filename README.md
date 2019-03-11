# 2-D-Scattering
This code is written in ROOT with the purpose of visualising my lab data gathered doing 2-D scattering experiment in the Physics lab. You 
can use it however you like, for whatever you do. It can be useful for comparising your data with mine but beware! I used really crude 
tools for this experiment. It would only works if you don't have modern tools like me. You can check how i do this experiment with my colleague below.


\documentclass{article}


\usepackage{arxiv}

\usepackage[utf8]{inputenc} % allow utf-8 input
\usepackage[T1]{fontenc}    % use 8-bit T1 fonts
\usepackage{hyperref}       % hyperlinks
\usepackage{url}            % simple URL typesetting
\usepackage{booktabs}       % professional-quality tables
\usepackage{amsfonts}       % blackboard math symbols
\usepackage{nicefrac}       % compact symbols for 1/2, etc.
\usepackage{microtype}      % microtypography
\usepackage{geometry}
\usepackage{graphicx}
\usepackage{subcaption}
\usepackage{mathtools}
\usepackage[separate-uncertainty = true,multi-part-units = repeat]{siunitx}

\title{2-D SCATTERING}


\author{
  Feryadi Dağcı \\
  Department of Physics\\
  Boğaziçi University\\
  \texttt{feryadi.dagci@boun.edu.tr} 
  %% examples of more authors
   \And
  Barış Yeşiloğlu \\
  Department of Physics\\
  Boğaziçi University\\
  \texttt{baris.yesiloglu.edu} \\
  %% \AND
  %% Coauthor \\
  %% Affiliation \\
  %% Address \\
  %% \texttt{email} \\
  %% \And
  %% Coauthor \\
  %% Affiliation \\
  %% Address \\
  %% \texttt{email} \\
  %% \And
  %% Coauthor \\
  %% Affiliation \\
  %% Address \\
  %% \texttt{email} \\
}


\begin{document}
\maketitle

\begin{abstract}
In this experiment we determined a circular target's cross section by shooting towards it steel balls that have negligible 
mass and size in proportion to the target and then gathered the information of the scattered steel balls' impact point on 
the pressure sensitive paper tape. Even though we used crude tools, we showed that it is plausible to find a very 
close result to the real value with a % error rate by shooting towards a target with a large enough times which we 
achieved it with shooting over 900 times.
\end{abstract}


% keywords can be removed
\keywords{Scattering \and Cross Section}


\section{Introduction}
\paragraph{}
This very simply physical tool has many application, although in a very complex way, in particle physics, astrophysics 
and nuclear physics as well as atomic, molecular, and optical physics (AMO).


\section{Theory}
\begin{equation} \label{eq:eq1}
m=\frac{Ird\theta}{2}
\end{equation}
where I is the incident flux on the target, r is the radius of target, and $d\theta$ is the separation between part. We then rearrange the equation to find r.\\

\begin{equation} \label{eq:eq2}
r=\frac{2m}{Id\theta}
\end{equation}

Then we find sigma by;

\begin{equation} \label{eq:eq3}
\sigma=2r
\end{equation}

where $\sigma$ is our cross section.

\newpage

\section{Apparatus}


\begin{figure}[h]
\centering
\begin{subfigure}{1.00\linewidth} \centering
     \includegraphics[scale=0.40]{1.jpeg}
     \caption{Pressure Sensitive Paper Tape}\label{fig:tape}
   \end{subfigure}\\
   \begin{subfigure}{0.49\linewidth} \centering
     \includegraphics[scale=0.14]{2.jpeg}
     \caption{Scattering Tray and 20 Steel Balls}\label{fig:tray and balls}
   \end{subfigure}
   \begin{subfigure}{0.49\linewidth} \centering
     \includegraphics[scale=0.14]{3.jpeg}
     \caption{Gun}\label{fig:gun}
   \end{subfigure}
\caption{Work Station} \label{fig:apparatus}
\end{figure}

\section{Procedure}

 \begin{itemize}
    \item We placed a target in the middle of scattering tray and fasten it up.
    \item Then we covered the scattering tray's inside surface with pressure sensitive paper tape. 
    \item Marked every 20 degrees starting from 10 to 350.
    \item Placed our gun at a position where it barely touches left side of the target.
    \item Shoot 20 balls at that place and watch them scatter. 
    \item We picked the ball up so they don't interfere for the next phase.
    \item Moved our gun towards to other side by using careful tools. (For example: Our system has spring attached to the screw. 
We only needed to just turn the screw one full turn.)
    \item Repeated the shooting process until we reach the other side of your target. 
    \item Gathered the data of the number of hits in each portion. This will be our ${dN_i}$ numbers.
    \item Made a plot ${dN_i}$ versus ${sin(x_i/2)}$. Since $sinx$ is symmetric around 180 degree, we could add symmetric values to increase statistics. 
    \item Calculated our uncertainty.
    \item Calculated the total cross section by summing the differential cross section. Verified that it is the diameter of the target. 
   
    \end{itemize}


\section{Data}
\paragraph{}
We threw 920 steel balls to our target but some of them didn't scatter at all. So we removed them from our data as well as data points from 350 to 10 degrees which is the area behind the target that is impossible to hit.

\begin{figure}[htp]
\centering
\includegraphics[width=17cm]{data1.png}
\caption{Distribution of Balls}
\label{fig:data1}
\end{figure}

\paragraph{}

In this data, we pretty much see Gaussian distribution which is expected and good.

\paragraph{}

We know sin(x) symmetric around y axis, so ball's chance to appear in either place is the same. It means we can sum the data points symmetric to y axis to increase our statistic

\begin{figure}[htp]
\centering
\includegraphics[width=15cm]{data2.png}
\caption{Rearranged distribution of Balls}
\label{fig:data2}
\end{figure}

\paragraph{}
We made a total of 46 turns on our screw and move our gun $6 \pm 0.1 cm$. From here, we can calculate how much the gun moves everytime we turn the screw.

$d=6 \pm 0.1$ cm, $n=46$ turns

\begin{equation} \label{eq:eq4}
dx=\frac{d}{n}=0.13 \pm 0.1 \quad  cm
\end{equation}

\paragraph{}
Then we calculate incident flux (I);

\begin{equation} \label{eq:eq5}
I=\frac{20}{0.13}=153.8\pm 0.1 \quad times/cm
\end{equation}

\section{Analysis}
\paragraph{}
Summing data points symmetric to y axis makes (1) to,

\begin{equation} \label{eq:eq6}
\frac{m}{2}=\frac{Ird\theta}{2}
\end{equation}

So we get a simple equation which we can use to find radius of our target.

\begin{equation} \label{eq:eq7}
m=Ird\theta
\end{equation}

From Figure:3, we see that slope of our data is $144 \pm 11.7$.

\begin{equation} \label{eq:eq8}
r=\frac{m}{Id\theta}=\frac{144}{153.8*0.35}=2.68 \quad cm
\end{equation}

where $d\theta/9=0.35$

\begin{equation} \label{eq:eq9}
\sigma=2r=2*5.36
\end{equation}

\section{Conclusion} 
\paragraph{}
We found a very close value to the real value with this experiment. Our biggest error was at counting the dents in the 
pressure sensitive paper. Even though we tried our best with my colleague, it was still really hard to differentiate 
one dent from two or two dents from three, let alone the dents happened by the second collisions from the first ones. 
This result can be easily be more precise and accurate just by using a digital collision counter so it removes the 
human error.



\bibliographystyle{unsrt}  
%\bibliography{references}  %%% Remove comment to use the external .bib file (using bibtex).
%%% and comment out the ``thebibliography'' section.


%%% Comment out this section when you \bibliography{references} is enabled.
\begin{thebibliography}{1}

\bibitem{kour2014real}
Advanced Physics Experiments by Erhan Gülmez (Boğaziçi University Publications, 1999, ISBN 975-518-129-6)

\bibitem{wiki2019}
Wikipedia contributors. (2019, March 3). Scattering. In Wikipedia, The Free Encyclopedia. Retrieved 22:42, March 10, 2019, from \texttt {https://en.wikipedia.org/w/index.php?title=Scattering\&oldid=885931059}

\bibitem{hadash2018estimate}
http://122.physics.ucdavis.edu/course/cosmology/sites/default/files/files/Rutherford/billiards.pdf

\end{thebibliography}


\end{document}
